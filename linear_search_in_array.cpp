#include <iostream>
using namespace std;

 int main (){

   int priyu[5] = {1,2,3,16,23};
   int n=5;
   int target = 55;
   bool flag = 0;

   for(int i=0;i<n;i++){
     if(priyu[i]==target){
       flag=1;
       break;
     }
   }

   if(flag==1){
     cout<<"Arpit found"<<endl;
   }
   else{
     cout<<"target not found"<<endl;
   }

  return 0;
 }