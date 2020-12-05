#include "main.h"
//todo
// add header fucntions







//yo commented
//helper fucntions












void driveXY(double yDirec,  double xDirec, double turningSpeed, double speed_scalar){

frontLeft = yDirec + xDirec + turningSpeed;
backLeft = yDirec - xDirec + turningSpeed;
frontRight = turningSpeed - yDirec + xDirec;
backRight = turningSpeed - yDirec - xDirec;

}

//driver control fucntions
void setDriveMotors()
{
double speedMulti = speedMulti * 1;
double driveY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
double driveX = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);
double turningRate = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);




driveXY(driveY, driveX, turningRate, speedMulti);









// a helper fucntion to set left and right




/* //this is old code to look at it is for tank xdrive
  int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
  int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
  */
/*
  if(abs(leftJoystick) < 10){
  leftJoystick = 0;
}

  if(abs(rightJoystick) < 10){
  rightJoystick = 0;
}
*/



}
/*void autoDriveXY(int driveTime){


  frontLeft = yDirec + xDirec + turningSpeed;
  backLeft = yDirec - xDirec + turningSpeed;
  frontRight = turningSpeed - yDirec + xDirec;
  backRight = turningSpeed - yDirec - xDirec;




  pros::delay(driveTime)
}*/
