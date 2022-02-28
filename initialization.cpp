 #include "main.h"
 //This file is where we initialize all of our motors. It's also where we set the
 //brake mode for out motors and where we set out pneumatics.
 void initialize(){
   //DRIVE
   //we wanted brake type coast for our drivetrain, because having other more abrupt brak types for
   //your drivetrain tends to make your encoder values less precise, becase if you try to go from moving
   //a heavy robot to stopping on a dime it's going to continue to slide for longer than you want,
   //which you can account for better with brake type coast.
   driveLeftBack.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
   driveRightBack.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
   driveRightBack.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
   driveRightFront.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
   //LIFTS
   //We wanted brake type hold for all of our lifts, because when trying to keep a mogo in the
   //air it's helpful to not have to keep holding down the button. This brake type is not perfect
   //especially for heavier mogos, but definitely helps give the driver one less thing to think about.
   liftThingTop.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
   liftThingBack.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
   liftThingFront.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
   //TILTER
   //Our tilter also is set to brake type hold, because we want our tilter to only be in two
   //decided places, so we don't want it moving around from that chosen angle.
   tilbiter.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
   //GYRO
   pros::ADIGyro(20);
   //PNEUMATICS
   # define DIGITAL_SENSOR_PORT 'A'
   pros::ADIDigitalOut claw (DIGITAL_SENSOR_PORT);
 //We have a brief brake here, because the gyro takes 2 seconds to initialize
   pros::delay(2000);
 }
