#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n)
                cout << i << " * " << j << " = " << i * j;
            else
                cout << i << " * " << j << " = " << i * j << ", ";
        }
        cout << "\n";
    }

    return 0;
}