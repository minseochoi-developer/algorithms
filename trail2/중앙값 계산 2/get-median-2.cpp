#include <iostream>
#include <algorithm>
#define MAX_N 100

using namespace std;

int arr[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if ((i + 1) % 2 == 1) {
            sort(arr, arr + i + 1);
            cout << arr[i / 2] << " ";
        }
    }

    return 0;
}