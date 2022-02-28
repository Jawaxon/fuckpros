#include "main.h"
//This is the code defining the gyro sensor
pros::Imu Gyro(20 );

//HELPER FUNCTIONS
//By making something that sets the drive you can set both the left sides and
//right sides to the same thing all at once
void setDrive(int left, int right){
  //ARCADE DRIVE LEFT JOYSTICK
  driveLeftFront = right;
  driveLeftBack = right;
  driveRightFront = left;
  driveRightBack = left;
}

//This function takes the amount that the gyro sensor tells you that you're off,
//and adds it to either the distance that the right needs to travel, or the distance
//that the left needs to travel, so that it can correct it's course.
void GyroNumber(int numbers){
  if(Gyro.get_rotation()>5){
    setDrive(-10 * numbers + Gyro.get_rotation(), -10 * numbers -Gyro.get_rotation());
  }
}

//This function is for autonomous coding, and it re-sets the drive encoders back to 0,
//so that you can start tracking you next movement from 0.
void resetDriveEncoders(){
    driveLeftFront.tare_position();
    driveLeftBack.tare_position();
    driveRightFront.tare_position();
    driveRightBack.tare_position();
}

//This function gives you back the average ammount that the motors have traveled,
//so that you can track your movements in autonomous.
double averageDriveEncoderValue(){\
     return ( fabs(driveLeftFront.get_position())+
               fabs(driveLeftBack.get_position())+
         fabs(driveRightFront.get_position())+
         fabs(driveRightBack .get_position())) / 4;
}

//DRIVER CONTROL FUNCTIONS

//This function tells the code which buttons go to which
//we decded to make the robot coded in arecade control, so that we can have a button
//map that we're familiar with.
  void setDriveMotors() {
//here we say that the y axis of the joystick is controlling the forward and backward movement,
//and the x axis of the joystick is controlling the left and right movement.
  int power = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
  int turn = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);

//here were linking the 'power' and 'turn' variables to 'left' and 'right,' which we defined in
//the setDrive function.
  int right= power+turn;
  int left = power-turn;
  setDrive (left, right);
}

//AUTONOMOUS FUNCTIONS
//these functions use the encoder units(one shaft rotatioin) to map it's position
//on the field. The way that this function is set up has it so that we can just give
//it a unit and a voltage, and it will contiinue to go the same velocity until the
//motors reach the desired encoder value.

void forward(int units, int voltage){
 // define a direction based on units provided
  int direction = abs(units / units);
  //reset motor encoders
  resetDriveEncoders();
  //reset the gyro encoders
  Gyro.reset();
  //drive forward at the desired voltage until units are reached
  while(averageDriveEncoderValue() < abs(units)){
  //set the drive to the voltage you want it to get while your units haven't been reached
    setDrive(voltage,voltage);
  //brief brake
    pros::delay(10);
    }
  //
  setDrive(-10*direction - Gyro.get_rotation(), -10*direction + Gyro.get_rotation());
  //This
  setDrive(-10*direction, -10*direction);
  pros::delay(50);
  //set drive back to nuteral
  setDrive(0,0);
}

//this is the same equation except in order to make it turn we have to set either the
//left or right voltage to 0
void turn(int units,int voltageRight, int voltageLeft){
  // define a direction based on units provided
int direction = abs(units/units);
//reset motor encoders
resetDriveEncoders();
//reset the gyro encoders
Gyro.reset();
//drive forward until units are reached
while(averageDriveEncoderValue() < abs(units)){
  setDrive(voltageLeft,voltageRight);
  pros::delay(10);
  }
//brief brake
  pros::delay(50);
//reset drive back to 0,0, so that you can start over from 0
  setDrive(0,0);
}
