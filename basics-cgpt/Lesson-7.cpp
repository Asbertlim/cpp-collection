#include <iostream>
using namespace std;

struct Robot {
    int battery;
    double speed;
    int distances[5];
    int distanceCount;
};

int main(){
    Robot scout = {60, 1.2, {45, 30, 15, 25, 10}, 5};

    cout << scout.battery << endl;
    cout << scout.speed << endl;

    for (int x = 0; x < scout.distanceCount ; x++){
        cout << "Scout travels for: " << scout.distances[x] << "m " << endl;
    }   
    cout << "Distance count: " << scout.distanceCount <<  endl;
    
}
