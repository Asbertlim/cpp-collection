// First Robotics Lesson


int distance = 15;

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (distance < 20) {
        Serial.println("STOP! Obstacle detected.");
    }
    else{
        Serial.println("Path clear. Moving forward!");
    }

    delay(1000);
}
