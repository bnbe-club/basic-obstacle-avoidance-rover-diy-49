#ifndef _ROVER_H_
#define _ROVER_H_

#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

#define LEFT_MOTOR_POSITIVE_PIN     5
#define LEFT_MOTOR_NEGATIVE_PIN     6
#define RIGHT_MOTOR_POSITIVE_PIN    9
#define RIGHT_MOTOR_NEGATIVE_PIN    10  

#define DUTY_CYCLE_NORMAL           60
#define DUTY_CYCLE_RAPID            90

void roverInit();                   //initialize pins and switch OFF both the motors

void roverStop();                   //switch OFF both the motors
void roverMoveForward();            //move forward at normal speed
void roverMoveReverse();            //revers at normal speed
void roverTurnRight();              //make a gradual right turn
void roverTurnLeft();               //make a gradual left turn

void roverMoveForwardRapid();       //move forward rapidly
void roverMoveReverseRapid();       //reverse rapidly
void roverTurnRightRapid();         //make a right turn on the spot
void roverTurnLeftRapid();          //make a left turn on the spot

#ifdef __cplusplus
} // extern "C"
#endif

#endif
