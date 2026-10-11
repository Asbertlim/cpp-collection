#include <iostream>
#include <string>
using namespace std;

int main() {
    int distances[] = {45, 32, 18, 12, 40};
    for(int x = 0; x < 5; x++){
        cout << "Scan " << x+1 << " : " << distances[x] << " cm" << endl;
        if (distances[x] < 20) {
            cout << "Obstacle detected!" << endl;
        }
        else {
            cout << "Path clear..." << endl;
        }
    }
    cout << "All scans complete!" << endl;
    return 0;
}

