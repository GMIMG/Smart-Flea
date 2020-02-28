
# 스마트 벼룩

- 팀원 : 김지승, 조완상, 황지민
- 설명 : 벼룩의 센서를 통해 수질의 데이터들을 중앙시스템에 보내고 그 데이터를 통해 여러 기기들을 제어한다.

동작 영상 : [https://youtu.be/fFqNTA0pPPM](https://youtu.be/fFqNTA0pPPM)

## 구성

- 벼룩 : Cortex M3
- 중앙시스템 : Server
- 여러기기 및 공장 : Cortex M3



## 시뮬레이션 

- 벼룩에 장착된 센서들을 통해 수질의 데이터들을 취득
- 데이터를 중앙시스템(서버)에 전달
- 중앙시스템(서버)에서 데이터들을 취합하여 여러기기(상하수도) 를 제어로 수질 정화
- 정화 완료 시 주변 목장,양식장 알림. 




벼룩 : 
 - 조도센서( 녹조류 감지), 가속도 센서(활동량측정으로 물의 오염도 감지) 
 - 데이터들을 중앙시스템으로 전송


중앙시스템 :
 - 데이터들을 취합 및 정제 후 여러기기를 제어


여러기기 :
 - 상수도 : 수질 오염 시 정화작용
 - 하수도 : 폐수 배출 시 하수 시스템 가동
 - 알림시스템 : 인근 목장, 양식장 수질정보 알림
 - 공장폐수 배출 제어



## 일정

- 1일차: 기획 및 주제 선정
- 2일차: 센서 및 네트워크 구현
- 3일차: 센서 및 네트워크 구현
- 4일차: 벼룩 및 여러기기 구현
- 5일차: 서버구축
- 6일차: 서버 구현 완료
- 7일차: 서버와 기기 간 호환성 테스트
- 8일차: 결과보고서 작성