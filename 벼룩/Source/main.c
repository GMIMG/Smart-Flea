#include "device_driver.h"

// ADC1 설정(조도센서)
extern volatile int ADC1_value;
extern volatile int ADC1_flag;
extern volatile int TIM4_Expired;
extern volatile int Key_Value;
extern int LED1;


RCC_ClocksTypeDef RCC_ClockFreq;

// wifi
extern void WizFi250_Serial_Input_Mode(void);
extern volatile int wifi_mode;
extern void check_receive_data();

extern int sprintf(char * buffer,const char * format, ... );

int main(void)
{
	char s1[10];
	//가속도 센서값 변수
	signed char x, y, z; //, zz, g=53 ;
	signed char ex_x,ex_y,ex_z;
	signed char dx,dy,dz;
	
	int acc;
	I2C_Setup();
	
	//LED
	LED_Init();
	
	//조도센서
	float AD_value;
	RCC_GetClocksFreq(&RCC_ClockFreq);
	ADC_Configuration();
	
	TIM_Config();
	Uart1_Init(115200);
	Uart2_Init(115200);
	
	//KEY 인터럽트 설정
	SCB->SHCSR = 7<<16;
	Key_ISR_Enable(1);

	//타이머 인터럽트 설정
	TIM4_Repeat_Interrupt_Enable(1, 200);

	//wifi 접속
	WiFi_Init();
	Factory_Default();
	wifi_mode = Run_Server();
	
	for(;;)
	{
		//Uart2 확인
		check_receive_data();
		
		//조도센서값 voltage로 변환후 출력
		if(ADC1_flag)
		{
			AD_value = (ADC1_value*3.3)/4096.;
			Uart1_Printf("ADC = %4.2fV  ", AD_value);
			ADC1_flag = 0;   
		}
		
		// 타이머4 인터럽트 발생할때 마다 가속도, 조도값 측정
		if(TIM4_Expired)
		{
			if( LED1 == 1) LED_Invert();
      TIM4_Expired = 0;
			ADC_SoftwareStartConvCmd(ADC1, ENABLE);
      x = I2C_getbyte(0x38,0x29); //X-axis to read..
      y = I2C_getbyte(0x38,0x2b); //Y-Axis to read..
      z = I2C_getbyte(0x38,0x2d); //Z Axis to read..
			
			dx = ex_x - x;
			dy = ex_y - y;
			dz = ex_z - z;
			
			ex_x = x;
			ex_y = y;
			ex_z = z;
			
			if (dx < 0) dx = -dx;
			if (dy < 0) dy = -dy;
			if (dz < 0) dz = -dz;
			
			acc = dx + dy + dz;

			//활동량값 출력
			Uart1_Printf("ACC: %3d\n, ", acc);
			sprintf(s1,"%4.2f,%d,*", AD_value,acc);
			/////////////////////값 보내줌
			Uart2_Send_String((unsigned char *)s1);
		}
		
		//키입력하면 UART 출력 1, 4, 2
		if(Key_Value)
		{
			Uart1_Printf("KEY=%d\n", Key_Value);
			Key_Value = 0;
		}
	}
}
