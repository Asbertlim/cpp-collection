
#include <iostream>
using namespace std;

bool hasObstacle(int distances[], int size) {
    for (int i = 0; i < size; i++) {
        if (distances[i] < 20) {
            return true;
        }
    }
    return false;
}

bool canMove(int battery) {
    return battery >= 20;
}

void moveForward(double speed) {
    cout << "Scout moving at " << speed << " m/s" << endl;
}

void stopMotors() {
    cout << "Scout has stopped." << endl;
}

// TODO: Complete this function
void controlRobot(int distances[], int size,
                  int battery, double speed) {

    if (hasObstacle(distances, size)) {
     stopMotors();
    }
    else if (!canMove(battery)) {
        stopMotors();
        cout << "Robot needs to recharge" << endl;
    }
    else {
        moveForward(speed);
    }

}

int main() {
    int distances[] = {45, 30, 25, 40, 35};
    int size = 5;
    int battery = 60;
    double speed = 1.2;

    controlRobot(distances, size, battery, speed);

    return 0;
}
