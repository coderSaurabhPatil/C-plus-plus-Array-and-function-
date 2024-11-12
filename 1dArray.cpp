#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50}; //1d array of 5 integers

    //Printing element of the 1d array
    for(int i = 0; i < 5; i++){
        cout << "Element at index" << i <<":"<<arr[i] <<endl;
    }
    return 0;
}