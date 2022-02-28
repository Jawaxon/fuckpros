 #include "main.h"

 //HELPER FUNCTION
  void setLiftThingTop(int power){
    liftThingTop = power;
 }

  //DRIVER CONTROL FUNCTIONS
  void  setLiftThingTopMotors(){
  //RIGHT JOYSTICK
    int On = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
   liftThingTop = 127 * (On);

  }

  // void  setLiftThingTopMotors(){
  //   //LEFT TRIGGERS
  //   int jack = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
  // //___int_least16_t_defined  int jill = controller.get_analog(pros::E_CONTROLLER_);
  //  liftThingTop = 127 * (-jack);
  //  // setLiftThingTop(liftThingTop);
  // }

 //AUTONOMOUS FUNCTIONS
  void resetLiftThingTopEncoders(){
      liftThingTop.tare_position();

  }
  double liftThingTopEncoderValue(){
     return ( fabs(driveLeftFront.get_position()));
  }
  void lift(int units, int voltage){
  while(liftThingTopEncoderValue() < abs(units)){
  setLiftThingTop(voltage);
  pros::delay(10);
  }
  }
  //CHANGE TO JOYSTICK
