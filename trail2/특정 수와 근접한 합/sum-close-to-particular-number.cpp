#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int s, n;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                sum += arr[k];
            }
            ans = min(ans, abs(sum - s));
        }
    }

    cout << ans << endl;

    return 0;
}