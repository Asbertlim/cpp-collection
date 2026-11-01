#include <iostream>
#include <string>
using namespace std;

class Robot {
private:
    int battery;

public:
    string name;
    double speed;

    Robot(string robotName, int robotBat, double robotSpeed) {
        name = robotName ;
        battery = robotBat;
        speed = robotSpeed;
    }

    void setBattery(int value){
        if (value >= 0 && value <= 100){
            battery = value;
        }
        else{
            cout << "Battery value is invalid!" << endl;
        }
    }

    int getBattery(){
        return battery;
    }

    void DisplayStatus(){
        cout << "Name: " << name << endl;
        cout << "Battery: " << getBattery() << " %" << endl;
        cout << "Speed: " << speed << " m/s" << endl;
    }
};

int main() {
    Robot scout("Scout", 85, 2.4);

    scout.DisplayStatus();

    scout.setBattery(50);
    scout.DisplayStatus();

    scout.setBattery(150);
    scout.DisplayStatus();

    return 0;
}
