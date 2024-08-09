// The command given below is what you need for the working of the files from the main directory 
// ..............base command...example
// g++ randomCpp.cpp -IarrayLibrary -LarrayLibrary -lmyArrayLib -o myprogram

#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

void takeInput(int arr[], int size);
void printArray(int arr[], int size);
void swapElements(int arr[], int index1, int index2);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
void reverseArray(int arr[], int size);
int sumArray(int arr[], int size);
int searchElement(int arr[], int size, int key);
int binarySearch(int arr[], int size, int key);
void sortArray(int arr[], int size);
int getArraySize(int arr[]);
int findFirstOccurrence(int arr[], int size, int key);
int findLastOccurrence(int arr[], int size, int key);
int countOccurrences(int arr[], int size, int key);

#endif
