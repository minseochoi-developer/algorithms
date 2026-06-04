#include <iostream>

using namespace std;

int n;
int arr[100];

int GetMaxNum(int idx) {
    if (idx == 0)
        return arr[0];

    return max(arr[idx], GetMaxNum(idx - 1));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << GetMaxNum(n - 1) << endl;

    return 0;
}