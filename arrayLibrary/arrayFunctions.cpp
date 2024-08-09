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
for(int i=0;i<size;i+=2){//galti yaha pe thi bas...basics se hatoge to yhi hoga...
    if(i+1<size){
      swap(arr[i],arr[i+1]);//yaha ye i=4 keliye access error aana chaiye tha because apna index hi 4 tak jayega 5 to hai hi nhi...but aaya nhi. why.
    }//for safety   
}
}