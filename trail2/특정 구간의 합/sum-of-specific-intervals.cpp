#include <iostream>

using namespace std;

int n, m;
int arr[100];

int GetSum(int start, int end) {
    int sum = 0;
    for (int i = start - 1; i < end; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        cout << GetSum(a1, a2) << endl;
    }

    // Please write your code here.

    return 0;
}