#include <iostream>
#include <algorithm>
#include <cmath>

#define MAX_N 2000

using namespace std;

int n;
int arr[MAX_N];

int GetMax(int idx) {
    if (idx == 0)
        return arr[0] + arr[2 * n - 1];
    
    return max(arr[idx] + arr[2 * n - 1 - idx], GetMax(idx - 1));
}

int main() {
    // Please write your code here.
    cin >> n;

    for (int i = 0; i < n * 2; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n * 2);

    cout << GetMax(n - 1) << endl;

    return 0;
}