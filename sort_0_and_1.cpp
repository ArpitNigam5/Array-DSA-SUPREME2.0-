#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int sort0and1(int arr[],int size){

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

    cout<<"zerocount : "<<zerocount<<endl;
    cout<<"onecount : "<<onecount<<endl;

    int index = 0;

    while(zerocount--){
        arr[index]=0;
        index++;
    }
    while(onecount--){
        arr[index]=1;
        index++;
    }
 
}

int main(){
    
    int arr[] = {1,0,0,1,0,0,1,1,0,1,0,1,0,0};
    int size = 14;

    printArray(arr,size);
    cout<<endl;    
    sort0and1(arr,size);
    printArray(arr,size);

}
