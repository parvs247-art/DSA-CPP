#include <bits/stdc++.h>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "Front after operations: " << dq.front() << endl;

    return 0;
}