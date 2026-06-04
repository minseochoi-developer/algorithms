#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << arr[k - 1] << endl;

    return 0;
}