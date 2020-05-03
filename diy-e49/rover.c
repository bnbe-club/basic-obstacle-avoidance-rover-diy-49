#include "rover.h"

void roverInit()
{
  //define motor pins as outputs
  pinMode(LEFT_MOTOR_POSITIVE_PIN, OUTPUT);
  pinMode(LEFT_MOTOR_NEGATIVE_PIN, OUTPUT);
  pinMode(RIGHT_MOTOR_POSITIVE_PIN, OUTPUT);
  pinMode(RIGHT_MOTOR_NEGATIVE_PIN, OUTPUT);

  //set pins LOW to switch them off, this means set the PWM value to 0
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverStop()
{
  //set pins LOW to switch them off, this means set the PWM value to 0
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverMoveForward()
{
  //switch ON motors by increasing duty cycle to the positive pins
  //we use the normal duty cycle here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_NORMAL);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_NORMAL);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverMoveReverse()
{
  //rover will reverse when we apply voltage to the negative pins
  //we use the normal duty cycle here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_NORMAL);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_NORMAL);
}

void roverTurnRight()
{
  //rover will turn right when the left motor spins faster than the right motor, while rover moves forward
  //we use the two duty cycles here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_NORMAL);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverTurnLeft()
{
  //rover will turn left when the right motor spins faster than the left motor, while rover moves forward
  //we use the two duty cycles here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_NORMAL);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverMoveForwardRapid()
{
  //switch ON motors by increasing duty cycle to the positive pins
  //we use the rapid duty cycle here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);
}

void roverMoveReverseRapid()
{
  //rover will reverse when we apply voltage to the negative pins
  //we use the rapid duty cycle here
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_RAPID);
}

void roverTurnRightRapid()
{
  //rover will turn right when the left motor spins faster than the right motor
  //we reverse the right motor here which will cause the rover to turn on the spot
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_RAPID);
}

void roverTurnLeftRapid()
{
  //rover will turn left when the right motor spins faster than the left motor
  //we reverse the left motor here which will cause the rover to turn on the spot
  analogWrite(LEFT_MOTOR_POSITIVE_PIN, 0);
  analogWrite(LEFT_MOTOR_NEGATIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(RIGHT_MOTOR_POSITIVE_PIN, DUTY_CYCLE_RAPID);
  analogWrite(RIGHT_MOTOR_NEGATIVE_PIN, 0);  
}
