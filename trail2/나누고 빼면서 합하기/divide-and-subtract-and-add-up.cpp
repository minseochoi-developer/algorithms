#include <iostream>

using namespace std;

int n, m;
int A[100];

int GetCal() {
    int sum = 0;
    while(m > 0) {
        sum += A[m - 1];

        if (m % 2 == 1) {
            m -= 1;
        } else {
            m /= 2;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int sum = GetCal();

    cout << sum << endl;

    return 0;
}