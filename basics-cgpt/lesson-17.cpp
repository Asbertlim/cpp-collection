#include <iostream>
#include <string>
using namespace std;

class Robot{
private:
    int battery;
public:
    string name;

    Robot(string robotName, int robotBat){
        name = robotName;
        battery = robotBat;
    }

    void setBattery(int value){
        if (value >= 0 && value <= 100){
            battery = value;
        }
        else{
            cout << "Invalid battery!" << endl;
        }
    }
    int getBattery(){
        return battery;
    }

    void inspectRobot(const Robot& otherRobot){
        cout << "Other robot's name: " << otherRobot.name << endl;
        cout << "Other robot's battery: " << otherRobot.battery << " %" << endl;
        
    if (otherRobot.battery < 30){
        cout << otherRobot.name << " needs charging." << endl;
    }
    }
    
};

int main(){
    Robot scout("Scout", 85);
    Robot rescue("Rescue", 25);
    Robot delivery("Delivery", 90);

    scout.inspectRobot(rescue);
    scout.inspectRobot(delivery);

    return 0;
}


