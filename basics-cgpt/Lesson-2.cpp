#include <iostream>
#include <string>

using namespace std;

int main() {
    int battery = 15;
    bool obstacleDetected = false;

    if (battery >= 20 && !obstacleDetected) {
        cout << "All systems go! Moving forward." << endl;
    }
    else if (battery < 20 && !obstacleDetected) {
        cout << "Battery low! Returning to charging station." << endl;
    }
    else {
        cout << "Obstacle detected! Stopping robot." << endl;
    }

    return 0;
}
