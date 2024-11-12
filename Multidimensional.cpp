#include <iostream>
using namespace std;

int main() {
    int cube[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    }; // 3D array with 2 layers, each containing a 2x3 matrix

    // Printing elements of the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Element at [" << i << "][" << j << "][" << k << "]: " << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
