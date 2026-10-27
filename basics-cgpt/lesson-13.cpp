// Task 1 & 2

#include <iostream>
#include <string>
using namespace std;

class Robot {
public:
    string name;
    int battery;
    double speed;
    void displayStatus() {
        cout << name << " Battery: " << battery << "% Speed: " << speed << "m/s" << endl;
    }
};

int main() {
    Robot scout;
    Robot rescue;

    scout.name = "Scout";
    rescue.name = "Rescue";
    
    scout.battery = 85;
    rescue.battery = 40;
    
    scout.speed = 2.4;
    rescue.speed = 1.5;
    
    scout.displayStatus();
    rescue.displayStatus();

    return 0;
}

