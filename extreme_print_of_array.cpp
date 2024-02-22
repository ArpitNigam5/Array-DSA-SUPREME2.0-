#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void extremePrint(int arr[],int size){
    
    int left=0;
    int right= size-1;

    while(left<=right){
        if(left==right){
            cout<<arr[left]<<" ";
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";   
        }
        left++;
        right--;
    }

}

int main(){

    int arr[4] = {23,45,75,335};
    int size = 4;

    printArray(arr,size);
    cout<<endl;
    extremePrint(arr,size);
}