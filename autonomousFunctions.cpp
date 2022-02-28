#include "main.h"
void awpAuton(){
  haileysForwardFunction(6);
}
void thisAuton(){
  haileysForwardFunction(12.5);
  pros::delay(500);
  lift(20,100);
  haileysBackwardFunction(12.5);
}
void haileysAuton80Pts(){
  pros::delay(2000);
  haileysForwardFunction(20);
  haileysTurnLeftFunction(90);
  haileysForwardFunction(5);
  haileysTurnLeftFunction(90);
  haileysForwardFunction(10);
  haileysTurnRightFunction(90);
  haileysForwardFunction(6.5);
  haileysTurnRightFunction(90);
  haileysForwardFunction(10);
  haileysTurnLeftFunction(90);
  haileysForwardFunction(6.5);
  haileysTurnLeftFunction(90);
  haileysForwardFunction(15);
  haileysTurnRightFunction(90);
}


void haileysAuton(int x, int y){
  haileysBackwardFunction(25);
  haileysTurnRightFunction(90);
  haileysForwardFunction(5);
  haileysTurnRightFunction(90);
  haileysBackwardFunction(15);
  //just finsihed pushing the first yellow
  haileysTurnRightFunction(90);
  haileysBackwardFunction(8.5);
  haileysTurnRightFunction(90);
  haileysBackwardFunction(15);
  //finished second yellow
  haileysTurnRightFunction(90);
  haileysForwardFunction(8);
  haileysTurnRightFunction(90);
  haileysBackwardFunction(15);
    // finished third yellow
  haileysForwardFunction(20);
  haileysTurnRightFunction(90);
  haileysBackwardFunction(7);
  haileysTurnRightFunction(90);
  haileysForwardFunction(30);

  // haileysBackwardFunction(25);
  // haileysTurnRightFunction(90);
  // // haileysForwardFunction(5);
  // // haileysTurnRightFunction(90);
  // haileysBackwardFunction(12);
  // //just finsihed pushing the first yellow
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(9);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(15);
  // //finished second yellow
  // haileysTurnRightFunction(90);
  // haileysForwardFunction(7);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(13);
  //   // finished third yellow
  // haileysForwardFunction(25);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(6);
  // haileysTurnRightFunction(90);
  // haileysForwardFunction(30);
  // // real end
  // haileysTurnRightFunction(200);
  // haileysBackwardFunction(15);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(10.5);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(24);
  // //finished pushing final yellow
  // haileysTurnRightFunction(90);
  // haileysForwardFunction(10.5);
  // haileysTurnRightFunction(90);
  // haileysBackwardFunction(50);
}

void turn90Right(){

}
void turn90Left(){

}

void TESTauton(){
  haileysTurnRightFunction(90);
}

void haileysTurnRightFunction (int degrees){
  turn(6.5*degrees,250,-250);
}
void haileysTurnLeftFunction (int degrees){
  turn(14*degrees,-200,200);
}

void haileysForwardFunction(double distance){
  forward(250*distance,200);
}
void haileysBackwardFunction(double distance){
  forward((250*distance), -200);
}

void redRightSkills(int x, int y){
  forward(x*4,500);
//  forward(x1,500);
  turn(y*.75,-500,500);
  //forward(-x*1,500);
  //turn(y*2,0,500);
  // forward(x*1+50,500);
  // turn(y*1,0,500);
  //forward();

}

void autonTest(){
  forward(100,500);
}
//(500,500) = about one foot/ 1 floor tile

//NOT ELLIO ALLIANCE PARTNERS
//RED LEFT
void redLeft(int x,int y){
forward(x*2+20,500);
turn(y*3,0,500);
forward(x,500);
turn(y,0,500);
}
//RED RIGHT
void redRight(int x,int y){
forward(x*2+20,500);
turn(0,y,500);
forward(-x,500);
turn(0,y,500);
forward(x*2,500);
turn(y,0,500);
forward(x*3,500);
}
//BLUE LEFT
void blueLeft(int x,int y){
forward(x*2+20,500);
turn(y*3,0,500);
forward(x,500);
turn(y,0,500);
}
//BLUE RIGHT
void blueRight(int x,int y){
forward(x*2+20,500);
turn(0,y,500);
forward(-x,500);
turn(0,y,500);
forward(x*2,500);
turn(y,0,500);
forward(x*3,500);
}
//WITH ELLIO
//RED LEFT

//RED RIGHT

//BLUE LEFT

//BLUE RIGHT
