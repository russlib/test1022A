//helper funcitons
#include "main.h"

void setIntake(int power){
  intakeLeft = power;
  intakeRight = power;
}

//driver controller functions
void setIntakeMotors() {
  int Power = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
setIntake(Power);
setIndexer(-(Power));
}



//the lower mech that picks up the balls after the intakes
void setIndexer(int iPower) {
indexer = iPower;
blooper = -iPower;

}

void setIndexerMotor(){
  int indexPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
setIndexer(indexPower);
}
/*
//the higher up mechanism is called blooper
void blooper(){

}

void setblooperMotors(){

}
*/
