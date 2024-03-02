#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> num;  //vector
    num.push_back(0);
    num.push_back(2);
    num.push_back(1);
    num.push_back(2);
    num.push_back(0);
    num.push_back(1);

    int n = num.size(); //vector size stored

    //before program execution

    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    // main logic

    int left = 0;
    int index = 0;
    int right = n-1;

    while (index<=right)
    {
        if(num[index] == 0){
            swap(num[index], num[left]);
            left++;
            index++;
        }
        else if(num[index] == 2){
            swap(num[index], num[right]);
            right--;
        }
        else{
            index++;
        }
    }

    //after program execution
    
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}