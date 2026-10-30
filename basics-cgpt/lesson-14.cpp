#include <iostream>
#include <string>
using namespace std;

class Robot{
public:
    string name;
    int battery;
    double speed;

    Robot(string robotName, int robotBat, double robotSpeed){
        name = robotName;
        battery = robotBat;
        speed = robotSpeed;
    }

    void displayStatus() {
        cout << "Name: " << name << endl;
        cout << "Battery: " << battery << " %" << endl;
        cout << "Speed: " << speed << " m/s" << endl;
    }

    bool needsCharging(){
        return battery < 30;
}
    
};

int main() {
    Robot Scout("Scout", 25, 2.4);
    Robot Rescue("Rescue", 40, 1.5);
    Robot Delivery("Delivery", 95, 3.0);

    Scout.displayStatus();
    if (Scout.needsCharging()) {
        cout << "Scout needs charging!" << endl;
    }
    Rescue.displayStatus();
    if (Rescue.needsCharging()) {
        cout << "Rescue needs charging!" << endl;
    }
    Delivery.displayStatus();
    if (Delivery.needsCharging()) {
        cout << "Delivery needs charging!" << endl;
    }

    return 0;
}
