#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        int total = 0;
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) total += j;
        }

        cout << total << "\n";
    }
    return 0;
}