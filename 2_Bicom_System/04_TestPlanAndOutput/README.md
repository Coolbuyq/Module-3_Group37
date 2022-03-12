

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

