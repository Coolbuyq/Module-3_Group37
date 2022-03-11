

# Test Plan and Output 

## High Level Test Plan

| Test ID | Description | Input | Expected Output | Actual Output | Passed/Not |
|---------:|:----------:|:------:|:--------------:|:---------------:|:--------|
|01 | Print window status | User presses button once | Print window status of car | Print window status of car | Passed |
|02 | Print alarm status | User presses button twice | Print alarm status of car | Print alarm status of car | Passed |
|03 | Print car battery info | User presses button three times | Print car battery info |  Print car battery info | Passed |
|04 | Print door status | User presses button four times | Print door status of car | Print door status of car | Passed |

## Low Level Test Plan 

| Test ID | Description | Input | Expected Output | Actual Output | Passed/Not |
|--------:|:-----------:|:-----:|:---------------:|:--------------:|:-------|
| 01      | check print window status |User presses button once| All LEDs should on | All LEDs should on | Passed |
|02 | Check print alarm status | User presses button twice | All LEDs should off | All LEDs should off | Passed |
|03 | Check print car battery info | User presses button three times | LEDs should on once clockwise | LEDs should on once clockwise | Passed |
|04 | check print door status |  User presses button four times | LEDs should on once anticlockwise | LEDs should on once anticlockwise | Passed |

