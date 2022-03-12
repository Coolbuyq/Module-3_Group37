

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

## OUTPUT
## 1 ) When the switch is pressed for one time
* It should turn ON all the LED's.
![Screenshot (371)](https://user-images.githubusercontent.com/86889916/157999031-eef740b8-31a4-4af4-8059-c0e2f54a4beb.png)

 ## 2) When the switch is pressed for two times
* it should turn OFF all the LED's.
![Screenshot (373)](https://user-images.githubusercontent.com/86889916/157999233-6804402c-7e07-43b4-8ef0-882318a12e01.png)

## 3) When the switch is pressed for three times
* It should turn ON all the LED's in clockwise manner.
![Screenshot (374)](https://user-images.githubusercontent.com/86889916/157999282-4430934b-ef0b-40fe-8cf5-af902ed301c5.png)

## 4) When the switch is pressed for four times.
* It should turn ON all the LED's in anticlockwise manner.
* ![Screenshot (375)](https://user-images.githubusercontent.com/86889916/157999320-0cfc6443-1e47-47c2-b401-acc28ac29c65.png)
