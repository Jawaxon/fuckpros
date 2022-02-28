#include "main.h"

  //HELPER FUNCTION

//DRIVER CONTROL FUNCTIONS
  //This function sets the power for the back lift motors when the Right triggers
  //are pressed.
  void  setLiftThingFrontMotors(){
   //LEFT TRIGGERSS

  //This is the code that tells "liftThingBack" that whent he right upper trigger is pressed it
  //sets the motor to +127 voltage, and when the right lower trigger is pressed it sets the motor
  //to -127 voltage
    liftThingFront = 127 * (-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1))));
  }

//AUTONOMOUS FUNCTIONS

void resetLiftThingFrontEncoders(){
  liftThingFront.tare_position();
}

double liftThingFrontEncoderValue(){
   return ( fabs(liftThingFront.get_position()));
}

void frontLift(int units, int voltage){
  while(liftThingFrontEncoderValue() < abs(units)){
  setLiftThingFront(voltage);
  pros::delay(10);
}
}
