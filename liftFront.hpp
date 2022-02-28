#include "main.h"
//this is where all of the functions for the front lift functions are declared

//HEALPER FUNCTIONS
void setLiftThingFront(int power);

//DRIVER CONTROL FUNCTIONS
void setLiftThingFrontMotors();

//AUTONOMOUS FUNCTIONS
void resetLiftThingFrontEncoders();
double liftThingFrontEncoderValue();
void frontLift(int units, int voltage);
