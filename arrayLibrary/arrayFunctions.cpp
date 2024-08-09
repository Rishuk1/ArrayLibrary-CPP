#include<iostream>
#include"arrayFunctions.h"
using namespace std;
void takeInput(int arr[],int size){
    cout<<"give the values in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alterSwap(int arr[],int size){
for(int i=0;i<size;i+=2){
    if(i+1<size){
      swap(arr[i],arr[i+1]);
    }   
}
}
