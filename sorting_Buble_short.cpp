#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i = 0; i< size-1;i++){
        for(int j= 0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[5] = {5,7,2,6,8};
    bubbleSort(arr,5);

    //Printing Sorted Arrays
    for(int i = 0; i < 5; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}