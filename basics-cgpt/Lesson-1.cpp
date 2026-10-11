#include <iostream>
#include <string>
using namespace std;

int main() {
    int battery = 15;
    double speed = 0.8;
    bool obstacleDetected = true;
    string robotName = "Scout";

    cout << "=== ROBOT STATUS ===" << endl;
    cout << "Name: " << robotName << endl;
    cout << "Battery: " << battery << "%" << endl;
    cout << "Speed: " << speed << " m/s" << endl;
    cout << "Obstacle detected: " << obstacleDetected << endl;

    return 0;
}
