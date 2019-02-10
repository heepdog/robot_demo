#include "Robot.h"
#include <Arduino.h>


    Robot::Robot(){
      
    }
    
    Robot::SetLeftMotorPorts(int enB, int in3,int in4){
      leftDriveEnable = enB;
      motorIn3 = in3;
      motorIn4 = in4;
    }
    Robot::SetRightMotorPorts(int enA, int in1, int in2){
      rightDriveEnable = enA;
      motorIn1 = in1;
      motorIn2 = in2;

    }

    
    Robot::Robot(int enA, int in1, int in2, int enB, int in3, int in4){
      SetRightMotorPorts(enA, in1, in2);
      SetLeftMotorPorts(enB, in3, in4);
    }
    

    Robot::SetServo(int p){
      sonarServo.attach(p);
    }
    Robot::SetSonar(int p){
      
    }

    Robot::SetIRSensor1(int p){
      ;
    }
    Robot::SetIRSensor2(int p){
      ;
    }
    Robot::SetIRSensor3(int p){
      ;
    }
    Robot::SetIRSensor4(int p){
      ;
    }

    Robot::Forward(int motorSpeed, int timeToRun ){
      digitalWrite(motorIn1, HIGH);
      digitalWrite(motorIn3 , HIGH);
      digitalWrite(motorIn2 ,LOW);
      digitalWrite(motorIn4 ,LOW);
      analogWrite(rightDriveEnable, motorSpeed);
      analogWrite(leftDriveEnable, motorSpeed);
      delay(timeToRun);
      digitalWrite(motorIn1, LOW);
      digitalWrite(motorIn3 , LOW);
      digitalWrite(motorIn2 ,LOW);
      digitalWrite(motorIn4 ,LOW);
      delay(20);
      analogWrite(rightDriveEnable, 0);
      analogWrite(leftDriveEnable, 0);
      
      ;
    }
    Robot::Reverse(int motorSpeed, int timeToRun ){
      
      
      digitalWrite(motorIn1, LOW);
      digitalWrite(motorIn3 , LOW);
      digitalWrite(motorIn2 ,HIGH);
      digitalWrite(motorIn4 ,HIGH);
      analogWrite(rightDriveEnable, motorSpeed);
      analogWrite(leftDriveEnable, motorSpeed);
      delay(timeToRun);
      digitalWrite(motorIn1, LOW);
      digitalWrite(motorIn3 , LOW);
      digitalWrite(motorIn2 ,LOW);
      digitalWrite(motorIn4 ,LOW);
      delay(20);
      analogWrite(rightDriveEnable, 0);
      analogWrite(leftDriveEnable, 0);

      ;
    }
    Robot::TurnRight(int angle, int motorSpeed){
      
      digitalWrite(motorIn1, HIGH);
      digitalWrite(motorIn3 , LOW);
      digitalWrite(motorIn2 ,LOW);
      digitalWrite(motorIn4 ,HIGH);
      analogWrite(rightDriveEnable, motorSpeed);
      analogWrite(leftDriveEnable, motorSpeed);
      delay(2000);
      digitalWrite(motorIn1, LOW);
      digitalWrite(motorIn3 , LOW);
      digitalWrite(motorIn2 ,LOW);
      digitalWrite(motorIn4 ,LOW);
      delay(20);
      analogWrite(rightDriveEnable, 0);
      analogWrite(leftDriveEnable, 0);

    }
    Robot::TurnLeft(int angle, int motorSpeed){
      ;
    }

