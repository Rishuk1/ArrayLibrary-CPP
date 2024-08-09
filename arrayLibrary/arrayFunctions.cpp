#include<iostream>
#include"arrayFunctions.h"
using namespace std;

// Function to take input into an array
void takeInput(int arr[], int size) {
    cout << "Give the values in the array:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to swap two elements in the array
void swapElements(int arr[], int index1, int index2) {
    if(index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) {
        swap(arr[index1], arr[index2]);
    } else {
        cout << "Invalid indices. Please enter indices within the array size." << endl;
    }
}

// Function to find the maximum element in the array
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to find the minimum element in the array
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

// Function to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to compute the sum of all elements in the array
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to search for an element in the array using linear search
int searchElement(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;  // Returns the index of the element if found
        }
    }
    return -1;  // Returns -1 if the element is not found
}

// Function to search for an element in a sorted array using binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key) {
            return mid;  // Element found at index mid
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Element not found
}

// Function to sort the array in ascending order (Bubble Sort)
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to return the size of an array
int getArraySize(int arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}

// Function to find the first occurrence of an element in the array
int findFirstOccurrence(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;  // Returns -1 if the element is not found
}

// Function to find the last occurrence of an element in the array
int findLastOccurrence(int arr[], int size, int key) {
    for(int i = size - 1; i >= 0; i--) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;  // Returns -1 if the element is not found
}

// Function to count occurrences of an element in the array
int countOccurrences(int arr[], int size, int key) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            count++;
        }
    }
    return count;
}
