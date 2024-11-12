#include <iostream>
using namespace std;

int main() {
    int rows = 2, columns = 3;
    int** matrix = new int*[rows]; // Dynamic allocation of 2D array

    // Allocating memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    // Initializing and printing the 2D dynamic array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = (i + 1) * (j + 1); // Set element value
            cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
