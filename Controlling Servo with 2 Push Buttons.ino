#include <Servo.h>
const int servoPin = 8;
const int rightPush = 10, leftPush = 6;
Servo myServo;
int angle = 0;
void setup() {
  pinMode(rightPush, INPUT_PULLUP);
  pinMode(leftPush, INPUT_PULLUP);
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(leftPush) == HIGH)
  {
    angle++;
    delay(5);
    myServo.write(angle);
  }
  if(digitalRead(rightPush) == HIGH){
    angle--;
    delay(5);
    myServo.write(angle);
   
  }
}
