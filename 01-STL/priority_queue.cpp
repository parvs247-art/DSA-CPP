#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(30);

    cout << "Top: " << pq.top() << endl; // Should print 50, as it's the largest element

    pq.pop(); // remove largest element (50)

    cout << "Top after pop: " << pq.top() << endl;

    cout << "Size: " << pq.size() << endl;

    return 0;
}