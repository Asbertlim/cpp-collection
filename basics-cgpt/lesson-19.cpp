const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 7;

long duration;
float distance;

void setup(){
	Serial.begin(9600);
  	pinMode(trigPin, OUTPUT);
  	pinMode(echoPin, INPUT);
  	pinMode(ledPin, OUTPUT);
}

void loop(){
	digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.0343 / 2;
  	
  	if (distance < 20){
      Serial.println("STOP! Obstacle detected.");
      digitalWrite(ledPin, HIGH);
  	}
  	
	else{
    	Serial.println("Path clear. Moving forward!");
        digitalWrite(ledPin, LOW); 
    }

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}  
