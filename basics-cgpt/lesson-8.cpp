#include <iostream>
using namespace std;

struct Robot{
    int battery;
};

int main() {
    Robot fleet[4] = {{80}, {15}, {10}, {45}};
    int count = 0;

    for (int i = 0; i < 4; i++){
        cout << fleet[i].battery << endl;
    }

    for (int i = 0; i < 4; i++){
        if (fleet[i].battery < 20){
            cout << "Robot needs charging!" << endl;
            count += 1;
        }
        else{
            cout << "Sufficient battery" << endl;
        }

    }
    cout << "There are: " << count << " robots need charging." << endl;
     return 0;   
}
