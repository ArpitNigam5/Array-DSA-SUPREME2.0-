#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int countOneZero(int arr[],int size){

    int zerocount = 0;
    int onecount = 0;


    for(int i=0;i<size;i++){
    if(arr[i]==0){
        zerocount++;
    }
    if(arr[i]==1){
        onecount++;
    }
    }

    cout<<"Zerocount : "<<zerocount<<endl;
    cout<<"Onecount : "<<onecount<<endl;
}

int main(){
    
    int arr[6] = {0,0,1,0,0,1};
    int size = 6;
    
    printArray(arr,size);
    cout<<endl;
    countOneZero(arr,size);

}