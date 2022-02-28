#include "main.h"
//this is where all of the functions for the drive functions are declared 

//HELPER FUNCTIONS
//this is where we call on the setDrive function
void setDrive(int left, int right);
//this is where we call on the averageDriveEncoderValue function
double  averageDriveEncoderValue();

//DRIVER CONTROL FUNCTIONS
//this is where we call on the setDriveMotors function
void setDriveMotors();

//AUTONOMOUS FUNCTIONS
//this is where we call on the forward function
void forward(int units, int voltage);
//this is where we call on the turn function
void turn(int unitsLeft, int unitsRight, int voltage);
//this is where we call on the haileysAuton function
void haileysAuton(int x,int y);
//this is where we call on the haileysTurnLeftFunction function
void haileysTurnLeftFunction(int degrees);
//this is where we call on the hailleysTurnRightFunction function
void haileysTurnRightFunction(int degrees);
//this is where we call on the haileysForwardFunction function
void haileysForwardFunction(double distance);
//this is where we call on the haileysBackwardFunction function
void haileysBackwardFunction(double distance);
