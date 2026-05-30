#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << "* "; 
        }
        cout << "\n";
    }

    return 0;
}