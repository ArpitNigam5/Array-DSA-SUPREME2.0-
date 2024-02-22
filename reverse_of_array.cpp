#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[],int size){

    int left=0;
    int right=size-1;

    while(left<=right){
        swap(arr[left],arr[right]); //swap function (predifined)
        left++;
        right--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6] = {23,34,455,6,7,78};
    int size = 6;

    printArray(arr,size);
    cout<<endl;
    reverseArray(arr,size);
}