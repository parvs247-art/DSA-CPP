#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;
int arr[MAX_SIZE];
int n;

// two pointer recursion approach
void reverse(int i, int r) {
    if (i >= r) {
        return;
    }

    swap(arr[i], arr[r]);
    reverse(i + 1, r - 1);
}

// one pointer recursion approach
// void rev(int i) {
//     if (i >= n / 2) {
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);
//     rev(i + 1);
// }

int main() {
    cout << "Enter the size of array: ";
    cin >> n;

    if (n < 0 || n > MAX_SIZE) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(0, n - 1);
    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // rev(0);
    return 0;
}