#  터널 운행 시, 내부 환경 설정 시스템 개발 

프로젝트 참여자: 김도한, 성재현, 이시윤, 전민제, 정성윤  
프로젝트 기간: 2023년 10월 18일 ~ 2023년 10월 30일

# 목차
- [Software](#software)
- [실행 방법](#실행-방법)
- [System Architecture](#system-architecture)
- [Hardware](#hardware)
  - [Hardware Architecture](#hardware-architecture)
  - [Hardware Details](#hardware-details)

## Software
- **Raspberry Pi OS**
  - [Wiring Pi](https://github.com/WiringPi/WiringPi)
  - make
- **Arduino**
  - Arduino UNO

## 실행 방법
#### Arduino
- 아두이노 프로그램 실행  
  [UNO program](Project1/Total_module.ino) (Project1/Total_module.ino)  

  
#### Raspberry Pi  
- Build:  
  ```
  make
  ```

- run:  
  ```
  sudo ./run`
  ```

## System Architecture
- ### 모사한 차량 전장 System Architecture
  ![시스템 아키텍처](docs/images/Sensor_ECU_Actuator.png)  
- ### 개발을 진행한 System Architecture
  ![시스템 아키텍처](docs/images/system_architecture.png)  

## Hardware
- ### Hardware Architecture
  ![하드웨어 아키텍처](docs/images/hardware_architecture.png)  

- ### Hardware Details
  #### Raspberry Pi 4
  |**부품**|**사진**||**부품**|**사진**|
  |:---:|:---:|---|:---:|:---:|
  |Raspberry Pi 4|<img src="docs/images/rpi4.png" width="222" height="180"/>||Raspberry Pi Camera<br/>Rev 1.3|<img src="docs/images/raspberry PI Camera Rev 1.3.png" width="250" height="150"/>|
  |LCD Display|<img src="docs/images/LCD_Display.png" width="195" height="149"/>||RGB LED|<img src="docs/images/RGB_LED.png" width="180" height="180"/>|
  |Servo Motor|<img src="docs/images/Servo_Motor.png" width="184" height="180"/>||Step Motor|<img src="docs/images/Step_Motor.png" width="180" height="180"/>|
  |Piezo Buzzer|<img src="docs/images/piezo_buzzer.png" width="180" height="180"/>||Button|<img src="docs/images/Push_Button.png" width="180" height="180"/>|

  #### Arduino UNO
  |**부품**|**사진**||**부품**|**사진**|
  |:---:|:---:|---|:---:|:---:|
  |Arduino UNO|<img src="docs/images/arduino_uno.png" width="180" height="180"/>||UltraSonic Sensor<br/>(HC-SR04)|<img src="docs/images/ultrasonic_sensor HC-SR04.png" width="180" height="130"/>|
  |CDS Sensor|<img src="docs/images/CDS_Sensor.png" width="180" height="180"/>||IR Receiver<br/>(21 keys)|<img src="docs/images/IR_Receiver_21key.png" width="250" height="187"/>|
  |JoyStick<br/>(SZH-EK056)|<img src="docs/images/joystick SZH-EK056.png" width="200" height="150"/>||||
