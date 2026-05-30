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
        for (int col = n - row; col > 0; col--) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}