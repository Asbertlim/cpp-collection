#include <iostream>
using namespace std;

void checkObstacle(int distance){
    if (distance < 20){
        cout << "STOP" << endl;
    }
    else if (distance <= 50){
        cout << "SLOW" << endl;
    }
    else{
        cout << "GO" << endl;
    }
}

int main() {
    int count = 0;
    
    int distances[] = {15, 25, 70, 10, 55};
    for (int i = 0; i < 5; i++){
        cout << "Sensor reading: " << distances[i] << " cm" << endl;
        checkObstacle(distances[i]);
        if (distances[i] < 20){
            count += 1;
        }
    }
    cout << "There are " << count << " times of stopping." << endl;

    return 0;
}
