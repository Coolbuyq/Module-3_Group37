# Bicom System

## Introduction
   This project is an BiCom System. This system Displays Window Status, Alarm Status, Battery Information, Door Status . There is a led signaling which helps us to identify the      features. For example if we press a button 1 time all the LED will be on which means the Window status of car is displayng, similarly for 2, 3 and 4 clicks. There are several      features like communication between car to key and key to car.
   
## About:
 The Bicom System is all about the bi-directional transmission of the data between the user interface and the Car , which probably makes the system more advance and more friendly to the user, It is all about making the particular ECU totally contact-less and by finding the profined method for the success.
   
## The Essentials:
* It should display the window satus of car on one user Button Click
* It will share the alarm status of car when the user does two Button Clicks
* It will display battery information of car on the three User Button Clicks
* It should be responsible display door satus of car on four User Button Clicks

##  Ease on functions:
* Buttons shall be provided to ease the access of available features.
* A Button Press displays the window status of car while parked.
* A Button press displays the Alarm cycle of a car.
* A button press displays the battrey life of the car.

## Requirements
### High-Level Requirements
|  ID|Description|
  |---|---|
  | HLR01 | It Shall detect the Window Status |
  | HLR02 | It shall Update the alarm status |
  | HLR03 | It Shall detect the car battery information |
  | HLR04 | It Shall update the door status |
  
### Low-Level Requirements
| ID | Low Level Requirements for H1|       |ID | Low Level Requirements for H2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | Pressing Blue button once shall make all LEDs glow at once |       |H2L1 | Pressing Blue button twice shall stop all LEDs from glowing at once.|
     



| ID | Low Level Requirements for H3|  |ID | Low Level Requirements for H4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | Pressing Blue button thrice shall make all LEDs glow clockwise as shown below|  | H4L1 | Pressing Blue button four times shall make all LEDs glow anti-clockwise as sho
|H3L1 |GREEN:arrow_right:ORANGE:arrow_right:RED:arrow_right:BLUE |                       |H4L1 | GREEN:arrow_right:BLUE:arrow_right:RED:arrow_right:ORANGE |  
 
## SWOT ANALYSIS.
![SWOT](https://user-images.githubusercontent.com/98813646/157853215-1b9bdbb0-39c1-462a-8877-b8bbcc2f0884.PNG)

## 5W's & 1H.
![Untitled](https://user-images.githubusercontent.com/98813646/157856381-a0fc27ac-7b55-4059-a934-db2c102b12ac.png)
# Structural Diagram

## High-Level Flow Chart
![HighLevelBiCom](https://user-images.githubusercontent.com/98817420/157873787-1115a071-a70a-49a8-b362-3cde852bb7fe.png)

## High Level UML UseCase Structural Diagram:
![High BI UmL](https://user-images.githubusercontent.com/98813646/157869442-56c214b6-9b89-4510-a6e8-4ceadc847d8f.png)

# Test Plan and Output 

## High Level Test Plan

| Test ID | Description | Input | Expected Output | Actual Output | Passed/Not |
|---------:|:----------:|:------:|:--------------:|:---------------:|:--------|
|01 | Print window status | User presses button once | Window status (Open or Close) | Window status (Open or Close) | ✔️ Passed |
|02 | Print alarm status | User presses button twice | Alarm status | Print alarm status of car | ✔️ Passed |
|03 | Print car battery info | User presses button three times | Battery status (Full or not) |  Battery status (Full or not) | ✔️ Passed |
|04 | Print door status | User presses button four times | Door status (open or close) | Print door status of car | ✔️ Passed |

## Low Level Test Plan 

| Test ID | Description | Input | Expected Output | Actual Output | Passed/Not |
|--------:|:-----------:|:-----:|:---------------:|:--------------:|:-------|
|01 | check print window status |User presses button once| All LEDs turn on | All LEDs should on | ✔️ Passed |
|02 | Check print alarm status | User presses button twice | All LEDs turn off | All LEDs should off | ✔️ Passed |
|03 | Check print car battery info | User presses button three times | LEDs turn on once clockwise | LEDs turn on once clockwise | ✔️ Passed |
|04 | check print door status |  User presses button four times | LEDs turn on once anticlockwise | LEDs turn on once anticlockwise | ✔️ Passed |




