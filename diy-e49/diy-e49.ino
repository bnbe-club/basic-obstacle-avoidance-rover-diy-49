/*************************************************************************************************************************************************
 *  TITLE: Basic Obstacle Avoidance & Line Following Algorithms
 *
 *  By Frenoy Osburn
 *  YouTube Video: https://youtu.be/JF6Gq2Pnvbs
 *************************************************************************************************************************************************/
 
#include "rover.h"

#define OBSTACLE_RIGHT_PIN    8           //active LOW
#define OBSTACLE_LEFT_PIN     11          //active LOW

bool sensorState(int sensorPin)
{
  if(digitalRead(sensorPin))
  {
    return true;
  }
  else
  {
    return false;
  }
}

void obstacleAvoidace()
{
  if(!sensorState(OBSTACLE_RIGHT_PIN) && !sensorState(OBSTACLE_LEFT_PIN))   //if obstacle is blocking both sensors, then stop
  {
    roverStop();
  }
  else if(!sensorState(OBSTACLE_RIGHT_PIN))                                //else if obstacle is on the right, then turn left
  {
    roverTurnLeftRapid();
  }
  else if(!sensorState(OBSTACLE_LEFT_PIN))                                 //else if obstacle is on the left, then turn right
  {
    roverTurnRightRapid();
  }
  else                                                                    //else move forward
  {
    roverMoveForward();
  }
}

void obstacleFollow()
{
  if(!sensorState(OBSTACLE_RIGHT_PIN) && !sensorState(OBSTACLE_LEFT_PIN))   //if obstacle is blocking both sensors, then follow it
  {
    roverMoveForward();
  }
  else                                                                    //else stop
  {
    roverStop();
  }
}

void setup() 
{
  roverInit();
  pinMode(OBSTACLE_RIGHT_PIN, INPUT);
  pinMode(OBSTACLE_LEFT_PIN, INPUT);

  //roverMoveForward();
}

void loop() 
{
  //obstacleAvoidace();
  //obstacleFollow();
}
