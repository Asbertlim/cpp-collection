#include <Servo.h>

Servo myServo;

void setup() {
    myServo.attach(11);
}

void loop() {
	for (int angle = 30; angle <= 150; angle++) {
		myServo.write(angle);
      	delay(10);
	} 
  
  	for (int angle = 150; angle >= 30; angle --){
  		myServo.write(angle);
      	delay(10);
	}
} 
