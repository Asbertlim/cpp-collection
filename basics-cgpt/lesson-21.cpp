#include <Servo.h>

Servo myServo;

const int trigPin = 10;
const int echoPin = 11;

void setup() {
    Serial.begin(9600);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    myServo.attach(12);
}

float measureDistance(){
  long duration;
  float distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0343 / 2;
  
  return distance;
}

float scanDirection(int angle){
  myServo.write(angle);
  delay(500);
  
  return measureDistance();
}

void loop() {

    float leftDistance = scanDirection(30);
    float centreDistance = scanDirection(90);
    float rightDistance = scanDirection(150);

    Serial.println("Scanning completed!");

	Serial.println(leftDistance);
	Serial.println(centreDistance); 
	Serial.println(rightDistance); 

	if (centreDistance >= 20) {
    	Serial.println("MOVE FORWARD");
	}
	else if (leftDistance > rightDistance) {
    	Serial.println("TURN LEFT");
	}
	else {
    	Serial.println("TURN RIGHT");
	} 


    delay(1000);
} 
  
  
  
  
  
  
