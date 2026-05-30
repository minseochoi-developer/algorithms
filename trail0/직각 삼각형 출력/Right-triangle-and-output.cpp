#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    if (n == 1) {
        cout << "*" << endl;
        return 0;
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row * 2 + 1; col++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}