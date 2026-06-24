#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int ability[6];

int GetDiff(int a1, int a2, int b1, int b2) {
    int sum1 = ability[a1] + ability[a2];
    int sum2 = ability[b1] + ability[b2];
    int sum3 = 0;
    for (int i = 0; i < 6; i++) {
        sum3 += ability[i];
    }
    sum3 = sum3 - sum1 - sum2;

    int max_sum = max(sum1, sum2);
    int min_sum = min(sum1, sum2);
    max_sum = max(max_sum, sum3);
    min_sum = min(min_sum, sum3);

    return max_sum - min_sum;
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }

    // Please write your code here.
    int ans = INT_MAX;
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                for (int l = k + 1; l < 6; l++) {
                    if (k == i || k == j || l == i || l == j) continue;

                    ans = min(ans, GetDiff(i, j, k, l));
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}