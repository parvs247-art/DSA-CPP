#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={10,20,30,40,50}; // dynamic array

    //v.begin() --> first postion of the vector
    //v.end() --> position after last element of the vedtor

    sort(v.begin(), v.end()); // sort the vector in ascending order
    cout<< "sorted"<<endl;
    for( int x: v){
    cout<<x<<""<<endl;
}
cout<<endl;

reverse(v.begin(), v.end()); // reverse the vector
cout<< "reversed"<<endl;
for( int x: v){
    cout<<x<<""<<endl;
}
cout<<endl;

 auto it= find(v.begin(), v.end(), 30); // find the element in the vector
if(it!=v.end()){
    cout<< "found"<<endl;
}
else{
    cout<< "not found"<<endl;   
}
cout<<endl;
cout<<"minmum element:"<< *min_element(v.begin(), v.end())<<endl; // find the minimum element in the vector
cout<<"maximum element:"<< *max_element(v.begin(), v.end())<<endl; // find the maximum element in the vector

return 0;
}