#if 1

#include "device_driver.h"
#include "st7735.h"

extern void TIM_Delay_ms(unsigned int time);

RCC_ClocksTypeDef RCC_ClockFreq;


// wifi
extern void WizFi250_Serial_Input_Mode(void);
extern volatile int wifi_mode;
extern void check_receive_data();
extern int sprintf(char * buffer,const char * format, ... );
extern int gasock_dg;
extern int jodo_dg;


int flag;



void Pollutuin_Detected(void);

int r2;
int r3;

int cntF; 

int arr[]={0,1,3,0,2};


void Select1(void)
{
	flag=1;
	check_receive_data();
	flag=0;

}

void pureA(void)
{
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(8,40,GREEN,RED,2,2,"Press key");
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	Uart2_Send_String("$@");
	
	Lcd_Clr_Screen(BLUE);
	Lcd_Draw_Bar(10,10,40,40,GREEN);
	Lcd_Draw_Bar(60,10,90,40,GREEN);
	Lcd_Draw_Bar(110,10,140,40,GREEN);
	Lcd_Draw_Bar(10,60,40,90,GREEN);
	Lcd_Draw_Bar(60,60,90,90,GREEN);
	Lcd_Draw_Bar(110,60,140,90,GREEN);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");

	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());

	Lcd_Draw_Bar(10,10,40,40,BLUE);
	Lcd_Draw_Bar(10,60,40,90,BLUE);
	Lcd_Draw_Bar(20,100,140,120,BLUE);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");

	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());

	Lcd_Draw_Bar(60,10,90,40,BLUE);
	Lcd_Draw_Bar(60,60,90,90,BLUE);
	Lcd_Draw_Bar(20,100,140,120,BLUE);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");
	
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());

	Lcd_Draw_Bar(110,10,140,40,BLUE);
	Lcd_Draw_Bar(110,60,140,90,BLUE);
	Lcd_Draw_Bar(20,100,140,120,BLUE);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(8,40,GREEN,RED,2,2,"~ Finish ~");
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");
	
	
	Uart2_Send_String("#@");
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	

	
	gasock_dg= 0;///////*수정
	
}


void pureB(void){
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(8,40,GREEN,RED,2,2,"Press key");
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	Uart2_Send_String("$@");
	
	Lcd_Clr_Screen(BLUE);
	Lcd_Draw_Bar(10,10,40,40,RED);
	Lcd_Draw_Bar(60,10,90,40,RED);
	Lcd_Draw_Bar(110,10,140,40,RED);
	Lcd_Draw_Bar(10,60,40,90,RED);
	Lcd_Draw_Bar(60,60,90,90,RED);
	Lcd_Draw_Bar(110,60,140,90,RED);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");

	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());

	Lcd_Clr_Screen(BLUE);
	Lcd_Set_Trans_Mode(1);
	Lcd_Draw_Bar(10,10,40,40,RED);
	Lcd_Draw_Bar(60,10,90,40,RED);
	Lcd_Draw_Bar(110,10,140,40,RED);
	Lcd_Draw_Bar(10,60,40,90,RED);
	Lcd_Draw_Bar(60,60,90,90,RED);
	Lcd_Draw_Bar(110,60,140,90,RED);
	Lcd_Set_Trans_Mode(0);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");

	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());

	Lcd_Clr_Screen(BLUE);
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	Lcd_Printf(8,40,GREEN,RED,2,2,"~ Finish ~");
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");
	
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	Uart2_Send_String("#@");
	
	
	jodo_dg= 0;///////*수정
}

void (*fa3[])(void) =
{
	pureA,
	pureB
};

void Select2(void)
{
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(8,40,GREEN,RED,2,2,"Press key");
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	r3=0;
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(5,0,GREEN,RED,1,1,"<<  Select work  >>");
	Lcd_Printf(10,25,GREEN,BLACK,1,1,"[1] removal of");
	Lcd_Printf(10,45,GREEN,BLACK,1,1,"    algae");//녹조제거
	Lcd_Printf(10,70,GREEN,BLACK,1,1,"[2] removal of");
	Lcd_Printf(10,90,GREEN,BLACK,1,1,"    impurities");//수질정화
	
	r3 = Key_Wait_Key_Pressed();
		if(r3&& (r3!=2) ){
			Uart1_Printf("KEY=%d\n", r3);
			fa3[arr[r3]-1]();
		};
			
//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	

	
	
}



//************
////////////////////////////////////////
void FacA(void){
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(0,0,GREEN,RED,2,2,"A");
}

void FacB(void){
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(0,0,GREEN,RED,2,2,"B");
}

void Fish(void){
	register int iF;
	cntF=70;
	Lcd_Clr_Screen(BLACK);
	for(iF=1;iF<=19;iF++){
		Lcd_Draw_Bar(20+cntF,35,130+cntF,65,BLACK);
		Lcd_Draw_Bar(30+cntF,35,70+cntF,65,RED);
		Lcd_Draw_Bar(20+cntF,40,30+cntF,60,RED);
		Lcd_Draw_Bar(70+cntF,40,80+cntF,60,RED);
		Lcd_Draw_Bar(80+cntF,47,90+cntF,52,RED);
		Lcd_Draw_Bar(90+cntF,40,100+cntF,60,RED);
		Lcd_Draw_Bar(30+cntF,40,35+cntF,45,BLACK);
		TIM_Delay_ms(70);
		cntF-=10;	
	}
	Lcd_Printf(20,100,GREEN,RED,1,1,"~ Press key ~");
}


void (*fa2[])(void) =
{
	FacA,
	FacB,
	Fish
};
/////////////////////////////////////////
//***********
void Select3(void)
{
	r2=0;
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(8,40,GREEN,RED,2,2,"Press key");
	LED_Display(1);
  TIM_Delay_ms(100);
	LED_Display(2);
 	TIM_Delay_ms(100);
	LED_Display(3);
 	TIM_Delay_ms(100);
	LED_Display(4);
 	TIM_Delay_ms(100);
	LED_Display(5);
 	TIM_Delay_ms(100);
	LED_Display(6);
 	TIM_Delay_ms(100);
	LED_Display(7);
 	TIM_Delay_ms(100);
	LED_Display(8);
 	TIM_Delay_ms(100);
	LED_Display(9);
 	TIM_Delay_ms(100);
	
	//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
	
	
	Lcd_Clr_Screen(BLACK);
	Lcd_Printf(5,0,GREEN,RED,1,1,"<< Where to send >>");
	Lcd_Printf(10,25,GREEN,BLACK,1,1,"[1] factory A");
	Lcd_Printf(10,50,GREEN,BLACK,1,1,"[2] factory B");
	Lcd_Printf(10,75,GREEN,BLACK,1,1,"[3] fish farm");
	
	r2 = Key_Wait_Key_Pressed();
		if(r2){
			Uart1_Printf("KEY=%d\n", r2);
			fa2[arr[r2]-1]();
		};
			
//while(!Uart1_Get_Pressed());
	while(!Key_Wait_Key_Pressed());
}






void (*fa[])(void) =
{
	Select1,
	Select2,
	Select3
};


void Pollutuin_Detected(void){
	  Lcd_Clr_Screen(BLACK);
    Lcd_Printf(10,0,GREEN,RED,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,RED,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,RED,2,2," Detected");
		TIM_Delay_ms(70);
		
		Lcd_Printf(10,0,GREEN,BLUE,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,BLUE,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,BLUE,2,2," Detected");
		TIM_Delay_ms(70);
		
		Lcd_Printf(10,0,GREEN,BLACK,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,BLACK,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,BLACK,2,2," Detected");
		TIM_Delay_ms(70);
		
		Lcd_Printf(10,0,GREEN,RED,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,RED,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,RED,2,2," Detected");
		TIM_Delay_ms(70);
		
		Lcd_Printf(10,0,GREEN,BLUE,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,BLUE,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,BLUE,2,2," Detected");
		TIM_Delay_ms(70);
		
		Lcd_Printf(10,0,GREEN,BLACK,2,2,"Pollution");
		Lcd_Printf(10,40,GREEN,BLACK,2,2,"  Degree");
		Lcd_Printf(10,80,GREEN,BLACK,2,2," Detected");
		TIM_Delay_ms(70);
		
		
}

int main(void)
{	
	///////////////////////설정값
	int r;
	Key_ISR_Enable(1);
	Key_Poll_Init();
  RCC_GetClocksFreq(&RCC_ClockFreq);

  TIM_Config();
  Uart1_Init(115200);
  Uart1_Printf("LCD Graphics Test\n");
	LED_Init();
	////////////////////////
	
	
	Uart2_Init(115200);
	WiFi_Init();
	Factory_Default();
	wifi_mode = Run_Server();
	
	Lcd_Init();
	
	
	Uart2_Send_String(".@");
	
 for(;;)
{
    Lcd_Set_Trans_Mode(0);
    Lcd_Set_Shape_Mode(0,0);
		
		//check_receive_data();
		

		//Pollutuin_Detected();
		
		Lcd_Clr_Screen(BLUE);
		Lcd_Printf(10,0,GREEN,RED,1,1,"<< Water System >>");
		Lcd_Printf(0,20,GREEN,BLUE,1,1,"[1] Receive a signal");
		Lcd_Printf(0,40,GREEN,BLUE,1,1,"[2] purification");
		Lcd_Printf(0,60,GREEN,BLUE,1,1,"[3] alarm");
		
		if(jodo_dg>0 || gasock_dg>0){
			Pollutuin_Detected();
			Lcd_Clr_Screen(BLUE);
			Lcd_Printf(10,0,GREEN,RED,1,1,"<< Water System >>");
			Lcd_Printf(0,20,GREEN,BLUE,1,1,"[1] Receive a signal");
			Lcd_Printf(0,40,GREEN,BLUE,1,1,"[2] purification");
			Lcd_Printf(0,60,GREEN,BLUE,1,1,"[3] alarm");
		}
		
		if(gasock_dg>0)	Lcd_Printf(0,90,RED,BLUE,1,1,"%d Water Pollution Detection",gasock_dg);
		if(jodo_dg>0) Lcd_Printf(0,110,RED,BLUE,1,1,"%d Seaweed Pollution Detection",jodo_dg);
		

		
		r = Key_Wait_Key_Pressed();
		if(r){
			Uart1_Printf("KEY=%d\n", r);
			fa[arr[r]-1]();
		};
		

    //Uart1_Printf("Test Finished\n\n");

  }
}


#endif

/////////////////////////////////////////////////////////////////////////////
