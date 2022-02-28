#include "main.h"

//HELPER FUNCTIONS

//DRIVER CONTROL FUNCTIONS
  //This function sets the power for the back lift motors when the Right triggers
  //are pressed
  void  setLiftThingBackMotors(){
    // //RIGHT TRIGGERS

  //This is the code that tells "liftThingBack" that whent he right upper trigger is pressed it
  //sets the motor to +127 voltage, and when the right lower trigger is pressed it sets the motor
  //to -127 voltage
    liftThingBack = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)));
  }

//AUTONOMOUS FUNCTIONS

void resetLiftThingBackEncoders(){
  liftThingBack.tare_position();
}

double liftThingBackEncoderValue(){
   return ( fabs(liftThingBack.get_position()));
}

void backLift(int units, int voltage){
  while(liftThingBackEncoderValue() < abs(units)){
  setLiftThingBack(voltage);
  pros::delay(10);
}
}
