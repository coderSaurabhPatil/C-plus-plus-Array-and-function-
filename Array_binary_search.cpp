#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == key) {
            return mid; // Key found at mid index
        } else if (arr[mid] < key) {
            left = mid + 1; // Narrow down to right half
        } else {
            right = mid - 1; // Narrow down to left half
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[5] = {1, 2, 5, 7, 9}; // Sorted array
    int key = 7;
    int index = binarySearch(arr, 5, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
