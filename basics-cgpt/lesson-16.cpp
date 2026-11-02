#include <iostream>
#include <string>
using namespace std;

class Robot{
private:
    int battery;
public:
    string name;
    double speed;

    Robot(string robotName, int robotBat, double robotSpeed) {
        name = robotName;
        battery = robotBat;
        speed = robotSpeed;
        
    }
    
    Robot() {
    name = "Unknown";
    battery = 100;
    speed = 0.0;
}

    Robot(string robotName) {
    name = robotName;
    battery = 100;
    speed = 0.0;
}

    void setBattery(int value){
        if (value >= 0 && value <= 100){
            battery = value;
        }
        else{
            cout << "Battery is invalid!" << endl;
        }
    }

    int getBattery(){
        return battery;
    }

    void displayStatus(){
        cout << "Name: " << name << endl;
        cout << "Battery: " << getBattery() << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main(){
    Robot Scout("Scout", 85, 2.4);
    Robot Rescue("Rescue");
    Robot Mini;

    Scout.displayStatus();
    Rescue.displayStatus();
    Mini.displayStatus();
    return 0;
}

