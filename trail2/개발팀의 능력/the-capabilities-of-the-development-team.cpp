#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[5];

int GetDiff(int a1, int a2, int b1, int b2) {
    int sum1 = arr[a1] + arr[a2];
    int sum2 = arr[b1] + arr[b2];
    int sum3 = 0;
    for (int i = 0; i < 5; i++) {
        sum3 += arr[i];
    }
    sum3 = sum3 - sum1 - sum2;

    if (sum1 == sum2 || sum1 == sum3 || sum2 == sum3) return -1;

    int ret = abs(sum1 - sum2);
    ret = max(ret, abs(sum2 - sum3));
    ret = max(ret, abs(sum3 - sum1));

    return ret;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    bool isPossible = false;
    int ans = INT_MAX;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                for (int l = k + 1; l < 5; l++) {
                    if (k == i || k == j || l == i || l == j) continue;

                    int diff = GetDiff(i, j, k, l);

                    if (diff == -1) continue;

                    isPossible = true;
                    ans = min(ans, diff);
                }
            }
        }
    }

    if (!isPossible)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}