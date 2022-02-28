#include "main.h"

void opcontrol() {
 while(true) {
   //code to control the drive
   setDriveMotors();
   setLiftThingBackMotors();
   setLiftThingFrontMotors();
   setLiftThingTopMotors();
   setTilterMotors();
   setClawButArsTries();

   pros::delay(10);
    }
 }
