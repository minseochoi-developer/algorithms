#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n, grid[201] = {0, };
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        x1 += 100;
        x2 += 100;

        for (int j = x1; j < x2; j++) {
            grid[j]++;
        }
    }

    int max_overlap = 0;
    for (int i = 0; i <= 200; i++) {
        max_overlap = max(max_overlap, grid[i]);
    }

    cout << max_overlap << endl;

    return 0;
}