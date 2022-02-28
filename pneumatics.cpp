#include "main.h"

//This is where we say which 3 wire port we're using
# define DIGITAL_SENSOR_PORT 'A'
//This is where we define what 'claw' is
pros::ADIDigitalOut claw (DIGITAL_SENSOR_PORT);

//This is the function that says if we press X the pneumatics should actuate, and if we press Y then the
//pneumatics should de-compress
void setClawButArsTries(){
  if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_X)){
    claw.set_value(true);
  }
  if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_Y)){
    claw.set_value(false);
  }
}
