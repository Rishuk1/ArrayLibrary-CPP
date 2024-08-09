// we still have to find out how we are going to make it work from another folder or in the same directory but with another folder...but for now enough playing with it...and what i can do is saare files ko dsadomination me daldo...thora confusing hojayega but fir bhi apan ik copy rakhenge iski......done
// the command given below is what u need for the working of the files from main directory 
// ..............base command...example
// g++ randomCpp.cpp -IarrayLibrary -LarrayLibrary -lmyArrayLib -o myprogram
#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H
void takeInput(int arr[],int size);
void printArray(int arr[],int size);
void alterSwap(int arr[],int size);
void checkIfWorking();
#endif