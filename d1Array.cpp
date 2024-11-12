#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array";
    cin >> size;

    int* arr = new int[size]; //dyanamic allocation of array

    //intializing and printing array
    for (int i = 0; i < size;i++){
        arr[i]=i+1; //set each element to its index +1
        cout << "element at index" << i << ":" <<arr[i] <<endl;
    }

    delete[] arr; //Free allocated memory
    return 0;
    
}