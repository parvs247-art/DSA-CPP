#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,int> freq; // map is a collection of key-value pairs
    int n;
    cin>>n;  // ask user to enter the number of elements

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        freq[x]++; // increment the frequency of the element in the map
    }

    for(const auto& x: freq){  // iterate through the map
        cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}