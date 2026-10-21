
#include <iostream>
using namespace std;

int main() {
    int battery[5] = {65, 30, 12, 48, 20};

    for (int a=0; a < 4; a++){
        for (int b=0; b < 4 - a; b++){
            if (battery[b] > battery[b+1]){
                int current = battery[b];
                battery[b] = battery[b+1];
                battery[b+1] = current;
            }
        }
    }

    for (int i=0; i < 5; i++){
        cout << battery[i] << endl;
    }

    return 0;
}
