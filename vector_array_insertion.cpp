
// vector array

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    // insert in vector array
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    
    // delete(only the last element) in vector array 
    v.pop_back();
    v.pop_back();

    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
    // clear the array
    v.clear();
    
}