#include <iostream>

using namespace std;

// Function 1: Check whether any obstacle is too close
bool hasObstacle(int distances[], int size) {
    for (int i = 0; i < size; i++) {
        if (distances[i] < 20){
            return true;
        }
    }
    return false;
}


// Function 2: Check whether the battery is sufficient
bool canMove(int battery) {
    return battery >= 20;
}

void moveForward(double speed) {
    cout << "Scout moving at " << speed << " m/s" << endl;
}

void stopMotors() {
    cout << "Scout has stopped." << endl;
}

int main() {
    int distances[] = {45, 30, 15, 25, 10};
    int battery = 60;
    double speed = 1.2;
    int size = 5;

    hasObstacle(distances, size);

    if (hasObstacle(distances, size)) {
        stopMotors();
    }
    else if (!canMove(battery)) {
        stopMotors();
        cout << "Please recharge battery." << endl;
    }
    else{
        moveForward(speed);
    }

    return 0;
}
