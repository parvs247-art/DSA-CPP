#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s={10,20,30,10,20,40,50}; // set is a collection of unique elements
    s.insert(60); // add element in set

    s.erase(60); // remove element from set

    for(const auto& x : s){
        cout<<x<<endl;
    }
    // s.count(60); // check if element is present in set or not
return 0;
}