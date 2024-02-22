#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}

int shiftArrayright(int arr[],int size){

    int temp = arr[size-1];

    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    arr[0] = temp;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {14,23,38,42,51};
    int size = 5;

    printArray(arr,size);
    cout<<endl;
    shiftArrayright(arr,size);
}