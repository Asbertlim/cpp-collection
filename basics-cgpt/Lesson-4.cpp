#include <iostream>
using namespace std;

void moveForward(double speed) {
    cout << "Moving at " << speed << " m/s" << endl;
}

void stopMotors() {
    cout << "Motor has stopped." << endl;
}

bool canMove(int battery) {
    return battery >= 20;
}

int main(){
    int battery = 75;
    double speed = 1.8;

    if (canMove(battery)) {
        cout << "Battery sufficient. Motor can move" << endl;
        moveForward(speed);
    }
    else {
        stopMotors();
        cout << "Battery too low!" << endl;
    }

    return 0;
}
