#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

bool linearSearch(int arr[],int size, int target){

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }   
    }  
    return false;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int target = 5;
    int size = 5;

    bool ans = linearSearch(arr,size,target);

    if(ans==1){
        cout<<"found"<<" ";
    }
    else{
        cout<<"not found"<<" ";
    }
    cout<<endl;
    printArray(arr,size);



}