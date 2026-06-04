#include <iostream>
#include <algorithm>

using namespace std;

int n;

bool isSameSeq(int *arr_A, int *arr_B) {
    for (int i = 0; i < n; i++) {
        if (arr_A[i] != arr_B[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Please write your code here.
    cin >> n;

    int arr_A[n], arr_B[n];
    for (int i = 0; i < n; i++) {
        cin >> arr_A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr_B[i];
    }

    sort(arr_A, arr_A + n);
    sort(arr_B, arr_B + n);

    if (isSameSeq(arr_A, arr_B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    
    return 0;
}