#include<iostream>
using namespace std;

int main(){

    int avika[3] = {2,5,10};
    int size = 3;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<avika[i]<<" "<<avika[j]<<endl;
        }
    }
}