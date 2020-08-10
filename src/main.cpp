#include <Arduino.h>
#include <Robot.h>

float dist;
bool first = true;

Robot robot(41,31, 9, 344);

void setup() {
  Serial.begin(9600);
  while(!Serial) {}

  Serial.println("\nInitializing D.A.V.E.");

  robot.setupServo();
  robot.setupOLED();
  robot.setupMotors();
  robot.setupDistanceSensor();
  robot.setupNavSensor(false);

}

void loop() {

  robot.readNavSensor();

  // float targetHeading;
  //
  // if (first) {
  //   robot.orient();
  //   first = false;
  // }
  //
  // robot.goForward(150);
  // dist = robot.readDistanceSensor();
  //
  // while (dist > 30) {
  //   dist = robot.readDistanceSensor();
  // }
  //
  // robot.stop();
  //
  // targetHeading = robot.selectDirection();
  //
  // robot.rotateToTarget(targetHeading);
}
