# Introduction
* Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob. 
* A remote keyless entry car kit doesn’t rely on a physical button or panel in order to get into your vehicle, but instead it has a sensor that detects your remote keyless key fob within a certain range of your vehicle. It then unlocks once you touch the door handle, but only while the key is nearby. Remote keyless entry cars also often allow for remote starting, as long as the remote key fob is within a short distance of the vehicle. 
* Remote keyless communications are done through encrypted radio signals, and this can either be done through short range radio to a remote key fob in your pocket, or it can be hooked up to a smartphone system and can actually be controlled over cellular networks from anywhere in the world.

# Current Stage of the project being Processed.
* The main focus is on wireless and remote control of the car.
* The second area of focus is to give our car with security via a dependable Encryption System.
* For the younger generation, a new generation of smart automobile concept.

# Current Stage of the project being Processed.
* The main focus is on wireless and remote control of the car.
* The second area of focus is to give our car with security via a dependable Encryption System.
* For the younger generation, a new generation of smart automobile concept.

# SWOT ANALYSIS.
![SWOT](https://user-images.githubusercontent.com/98813646/157853215-1b9bdbb0-39c1-462a-8877-b8bbcc2f0884.PNG)

# 5W's And 1H
![Untitled](https://user-images.githubusercontent.com/98813646/157856381-a0fc27ac-7b55-4059-a934-db2c102b12ac.png)

## High Level Requirements.
* It Shall function accordingly towards locking and Unlocking the door
* It Shall be a compact ECU performing the tasks provided
* It Shall Activate/Deactivate the alarm timed accordingly
* It Shall activate approach light under the provided condition
* It shall have a good security system preventing any kind of theft attempt

## Low Level Requirements.
* Pressing Blue button once shall make all LEDs glow at once
* Pressing Blue button twice shall stop all LEDs from glowing at once.
* Pressing Blue button thrice shall make all LEDs glow clockwise as shown below
Pressing Blue button four times shall make all LEDs glow anti-clockwise as shown.

# Flow Chart.
## Low lvl.
![D - Page 1](https://user-images.githubusercontent.com/98813646/157810733-62cd2d35-65d1-46be-a5dc-b5e05b162465.png)

## High Lvl
![D - Page 1 (2) (1)](https://user-images.githubusercontent.com/98813646/157810621-85b12a40-81bf-4c0e-af38-58993aa98332.png)

# UML UseCase.
## Low Lvl.
![Diagram drawio](https://user-images.githubusercontent.com/98813646/157845517-bf9f7c28-1477-4ff7-857e-0faa42eab77f.png)

## High Lvl.
![Untitled Diagram drawio](https://user-images.githubusercontent.com/98813646/157834184-ffa0bcac-dc9b-4062-984a-9413e523c86d.png)

# TEST PLAN.
## High Lvl.
|Sr. no| Input | Expected output | Actual output| Passed or failed  |
|------|-------|-----------------|--------------|-------------------|
| 1    | Click Button Once| All Leds On at same time | All Leds On | ✔️ Passed |
| 2    | Click Button Twice | All Leds Off at same time | All Leds Off | ✔️ Passed |
| 3    | Click Button Thrice | All Leds start in clockwise Direction | All Leds starts in clockwise Direction | ✔️ Passed |
| 4    | Click Button Quad times | All Leds starts in anti-clockwise Direction | All Leds starts in anti-clockwise Direction | ✔️ Passed |

## Low Lvl.
| Sr.No | Input | Expected output | Actual Output | Passed or Failed |
|-------|-------|-----------------|---------------|------------------|
| 1     | Tap button once | Car Locked | Car Locked   | ✔️ Passed |
| 2     | Tap Button Twice| Car Unlocked | Car Unlocked | ✔️ Passed |
| 3     | Tap Button Thrice | Alarm Activated | Alarm Activated | ✔️ Passed |
| 4     | Again Press Button Thrice | Alarm Deactivated | Alarm Deactivated | ✔️ Passed |
| 5     | Tap Button Quad times | Car Approach Light On | Car Approach Light On | ✔️ Passed |

![RKE1](https://user-images.githubusercontent.com/98813646/157925837-58bd2b2c-ffc8-459f-9eee-ddcc9911b70a.PNG)



