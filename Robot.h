
#ifndef Robot_h
#define Robot_h


#include <Servo.h>
#include <Arduino.h>

class Robot
{
  public:
    Robot();
    Robot(int enA, int in1, int in2, int enB, int in3, int in4),
    SetLeftMotorPorts(int enA, int in1, int in2);
    SetRightMotorPorts(int enB, int in3, int in4);

    SetServo(int p);

    SetSonar(int p);

    SetIRSensor1(int p);
    SetIRSensor2(int p);
    SetIRSensor3(int p);
    SetIRSensor4(int p);

    Forward(int motorSpeed, int timeToRun );
    Reverse(int motorSpeed, int timeToRun );
    TurnRight(int angle, int motorSpeed);
    TurnLeft(int angle, int motorSpeed);
    
   private:
    int rightDriveEnable;
    int motorIn1;
    int motorIn2;
    int leftDriveEnable;
    int motorIn3;
    int motorIn4;
    Servo sonarServo;
    
    

  
};

#endif
