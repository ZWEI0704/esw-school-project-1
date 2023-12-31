#  터널 운행 시, 내부 환경 설정 시스템 개발 

프로젝트 참여자: 김도한, 성재현, 이시윤, 전민제, 정성윤  
프로젝트 기간: 2023년 10월 18일 ~ 2023년 10월 30일

## 목차
- [Software](#software)
- [실행 방법](#실행-방법)
- [System Architecture](#system-architecture)
- [Hardware Architecture](#hardware-architecture)
  - [Hardware Details](#hardware-details)
    - [Raspberry Pi 4](#raspberry-pi-4)
    - [Arduino UNO](#arduino-uno)

### Software
- Raspberry Pi OS
  - [Wiring Pi](https://github.com/WiringPi/WiringPi)
  - make
- Arduino
  - Arduino UNO

### 실행 방법
- **Arduino**
  - 아두이노 프로그램 실행  
    [UNO program](Project1/Total_module.ino) 

  
- **Raspberry Pi**
  - Build:  
    `make`

  - run:  
    `sudo ./run`

## System Architecture
![시스템 아키텍처](docs/system_architecture.png)  

  
## Hardware Architecture
![하드웨어 아키텍처](docs/hardware_architecture.png)  

- ### Hardware Details
  - #### Raspberry Pi 4
  > |부품|<p align="center">사진</p>|
  > |------|---|
  > |Raspberry Pi 4|<p align="center"><img src="docs/rpi4.png" width="222" height="180"/></p>|
  > |Raspberry Pi Camera<br/>Rev 1.3|<p align="center"><img src="docs/raspberry PI Camera Rev 1.3.png" width="250" height="150"/></p>|
  > |LCD Display|<p align="center"><img src="docs/LCD_Display.png" width="195" height="149"/></p>|
  > |Servo Motor|<p align="center"><img src="docs/Servo_Motor.png" width="184" height="180"/></p>|
  > |Step Motor|<p align="center"><img src="docs/Step_Motor.png" width="180" height="180"/></p>|
  > |Piezo Buzzer|<p align="center"><img src="docs/piezo_buzzer.png" width="180" height="180"/></p>|
  > |RGB LED|<p align="center"><img src="docs/RGB_LED.png" width="180" height="180"/></p>|
  > |Button|<p align="center"><img src="docs/Push Button.png" width="180" height="180"/></p>|

  - #### Arduino UNO
  > |부품|<p align="center">사진</p>|
  > |------|---|
  > |Arduino UNO|<p align="center"><img src="docs/arduino_uno.png" width="180" height="180"/></p>|
  > |UltraSonic Sensor<br/>(HC-SR04)|<p align="center"><img src="docs/ultrasonic_sensor HC-SR04.png" width="180" height="130"/></p>|
  > |JoyStick<br/>(SZH-EK056)|<p align="center"><img src="docs/joystick SZH-EK056.png" width="200" height="150"/></p>|
  > |CDS Sensor|<p align="center"><img src="docs/CDS_Sensor.png" width="180" height="180"/></p>|
  > |IR Receiver<br/>(21 keys)|<p align="center"><img src="docs/IR_Receiver_21key.png" width="235" height="176"/></p>|
