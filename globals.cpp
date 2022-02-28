#include "main.h"
//This is where all of our global variables are defined.
//For all of our motors we defined the (port, gearset, which side it's on, and how were
//tracking the movement)

//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//MOTORS
//DRIVETRAIN
pros::Motor driveRightFront(20, pros::E_MOTOR_GEARSET_36,true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftBack(13, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBack(11, pros::E_MOTOR_GEARSET_36,true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftFront(14, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);

//TOP LIFT
pros::Motor liftThingTop(17, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);

//FRONT LIFT
pros::Motor liftThingFront(15, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);

//BACK LIFT
pros::Motor liftThingBack(18, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);

//TILTER
pros::Motor tilbiter(16, pros::E_MOTOR_GEARSET_06,true, pros::E_MOTOR_ENCODER_COUNTS);

//MISCELANEOUS
