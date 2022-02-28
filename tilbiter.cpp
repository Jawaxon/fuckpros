#include"main.h"

//HELPER FUNCTIONS
void setTilter(int power){
  tilbiter = power;
}

//DRIVER CONTROL FUNCTIONS
void  setTilterMotors(){
  //RIGHT TRIGGERS
  // We have our tilter being coltrolled by the X and B buttons. We chose these ones,
  //so that we wouldn't get them confused with the pneumatics buttons (left and right.)
  tilbiter = 75 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_A)-(controller.get_digital(pros::E_CONTROLLER_DIGITAL_B)));
}

//AUTONOMOUS FUNCTIONS

void resetTilterEncoders(){
  tilbiter.tare_position();
}

double tilterEncoderValue(){
   return ( fabs(tilbiter.get_position()));
}

void Tilter(int units, int voltage){
  while(tilterEncoderValue() < abs(units)){
  setTilter(voltage);
  pros::delay(10);
}
}
