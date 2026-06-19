#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        int dist = 0;
        for (int j = 1; j < n; j++) {
            if (j == i) 
                continue;
            else if (j == i + 1)
                dist += abs(x[j - 2] - x[j]) + abs(y[j - 2] - y[j]);
            else
                dist += abs(x[j - 1] - x[j]) + abs(y[j - 1] - y[j]);
        }
        ans = min(ans, dist);
    }

    cout << ans << endl;

    return 0;
}