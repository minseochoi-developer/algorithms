#include <iostream>

using namespace std;

int n;
int arr[10];

int GetGCD(int a, int b) {
    if (b == 0)
        return a;
    
    return GetGCD(b, a % b);
}

int GetLCMOfTwo(int a, int b) {
    return (a * b) / GetGCD(a, b);
}

int GetLCMOfArray(int idx) {
    if (idx == 0)
        return arr[0];

    return GetLCMOfTwo(arr[idx], GetLCMOfArray(idx - 1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << GetLCMOfArray(n - 1) << endl;

    return 0;
}