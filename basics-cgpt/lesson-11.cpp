// Task 1

#include <iostream>
using namespace std;

int remainingBattery(int battery, int used) {
    return battery - used;
}

int main(){
    cout << remainingBattery(100, 25) << endl <<
    return 0;
}

// Task 2
#include <iostream>
using namespace std;

void moveForward(int distance){
    cout << "Robot moved: " << distance << " cm" << endl;
}

int checkBattery(int battery){
    return battery - 10;
}

int main(){
    moveForward(20);
    cout << checkBattery(80) << " %" << " remaining" << endl;

    return 0;
}


// Task 3
#include <iostream>
using namespace std;

int calculateRemainingBattery(int battery, int distance){
    int remaining = battery - (distance/10) * 2 ;
    if (remaining < 0){
        remaining = 0;
    }
    return remaining;
}

int main(){
    int result = calculateRemainingBattery(100,3000);
    cout << result << endl;

    return 0;
}
