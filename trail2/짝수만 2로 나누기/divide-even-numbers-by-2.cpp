#include <iostream>
using namespace std;

int n;

void divideEven(int *x) {
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 != 0)
            continue;
        
        x[i] /= 2;
    }
}

int main() {
    // Please write your code here.
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    divideEven(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}