#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 2D array with 2 rows and 3 columns

    // Printing elements of the 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
