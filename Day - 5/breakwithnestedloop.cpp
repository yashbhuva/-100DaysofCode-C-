#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    
    for (int i = 1; i <= 3; i++) {
        
        for (int j = 1; j <= 3; j++) {
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}