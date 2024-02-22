#include<iostream>
#include<limits.h>
using namespace std;


void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int findMinimumArray(int arr[],int size){
    int minans = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minans){
            minans = arr[i];
        }
    }
    return minans;
}

int main(){
    
    int arr[7] = {22,34,65,78,3,8 ,7};
    int size = 7;

    printArray(arr,size);
    cout<<endl;
    int minimum = findMinimumArray(arr,size);
    cout<<"minimum no is : "<<minimum<<endl;

}