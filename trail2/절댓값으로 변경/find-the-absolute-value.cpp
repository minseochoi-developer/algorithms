#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 50

int n, arr[MAX_N];

void abs(int *arr) {
    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
    }

    return;
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    abs(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}