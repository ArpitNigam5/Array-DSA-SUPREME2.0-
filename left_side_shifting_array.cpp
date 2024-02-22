#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int leftShift(int arr[], int size){

    //12345
    //23451

    int temp = arr[0];

    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }

    arr[size-1]=temp;

}

int main(){

    int arr[] = {11,29,34,47,52};
    int size = 5;

    printArray(arr,size);
    cout<<endl;
    leftShift(arr,size);
    printArray(arr,size);
}