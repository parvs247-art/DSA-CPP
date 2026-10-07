//parameterised recursion
#include <iostream>
using namespace std;

// void sumoffirstN(int i, int sum){
//     if(i<1){
//         cout<<"Sum of first n numbers is: "<<sum<<endl;
//         return;
//     }

//     sumoffirstN(i-1,sum+i);
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     sumoffirstN(n,0);
//     return 0;
// }


//functional recursion

int sumoffirstN( int n){
    if(n==1){
        return 1;
    }
    return n + sumoffirstN(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Sum of first n numbers is: "<<sumoffirstN(n)<<endl;
    return 0;
}