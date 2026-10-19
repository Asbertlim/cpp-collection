
#include <iostream>
using namespace std;

struct Robot {
    int battery;
};

int main() {
    Robot fleet[5] = {{65}, {30}, {12}, {48}, {20}};

    int lowest_bat = fleet[0].battery;
    int lowest_idx = 0;

    for (int i=0; i < 5; i++) {

        if (fleet[i].battery < lowest_bat) {
            lowest_bat = fleet[i].battery;
            lowest_idx = i;
        }
    }

    cout << "Robot " << lowest_idx + 1<< " has" << " the lowest battery of " << lowest_bat << "%" << endl;

    return 0;
}
