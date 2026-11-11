const int EN = 5;
const int IN1 = 4;
const int IN2 = 3;

void setup() {
    pinMode(EN, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
}

void loop() {

    // Direction A, 30% speed
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(EN, 77);
    delay(3000);

    // Direction A, 80% speed
    analogWrite(EN, 204);
    delay(2000);

    // Stop
    analogWrite(EN, 0);
    delay(2000);

    // Direction B, 50% speed
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(EN, 128);
    delay(3000);

    // Stop
    analogWrite(EN, 0);
    delay(2000);
} 
