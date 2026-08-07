#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> arr={10,20,30,40,50}; // dynamic array

   arr.push_back(60); // add element at the end
   cout<< arr[5]<<endl;

   arr.pop_back(); // remove last element
   for(int i=0;i<arr.size();i++){
      cout<< arr[i]<<endl;         /*  for(int x : arr){
                                            cout<< x<<endl;
                                        }          */
   }
   return 0;
}