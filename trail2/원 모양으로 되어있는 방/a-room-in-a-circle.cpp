#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int dist = 0;
        for (int j = i; j < n + i; j++) {
            dist += a[j % n] * (j - i);
        }
        ans = min(ans, dist);
    }

    cout << ans << endl;

    return 0;
}