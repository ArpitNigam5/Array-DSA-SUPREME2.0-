
// testcase 1

#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int getUnique(int arr[],int size){

    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
    
}

int main(){

    int arr[] = {1,2,3,3,2,5,6,6,1,8,8};
    int size = 11;

    printArray(arr,size);
    int finalans = getUnique(arr,size);
    cout<<endl;
    cout<<"unique no is : "<<finalans;

}


// testcase 2

/* #include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int getUnique(int arr[],int size){

    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
    
}

int main(){

    int arr[] = {1,2,3,3,2,5,6,6,1,8,8};
    int size = 11;

    if(size%2 != 0){

    printArray(arr,size);
    int finalans = getUnique(arr,size);
    cout<<endl;
    cout<<"unique no is : "<<finalans;

    }
    else{
        cout<<"please provide odd size array"<<endl;
    }

}  */
