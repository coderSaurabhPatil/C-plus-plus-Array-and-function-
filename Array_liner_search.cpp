#include <iostream>
using namespace std;

int linearSearch(int arr[], int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i]== key)
        return i;
    }
    return -1; //Not found
}

int main(){
    int arr[5] = {3,7,9,1,5};
    int key = 9;
    int index = linearSearch(arr,5,key);

    if(index != -1){
        cout <<"Element found at index:" <<index <<endl;
    }else{
        cout<<"Element not found." << endl;
    }
    return 0;
}