#include <iostream>
using namespace std;

void printStars(int n, int m) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    printStars(n, m);

    return 0;
}