#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

int main() {
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    // Please write your code here.
    bool pair[n+1][n+1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) 
                pair[i][j] = false;
            else
                pair[i][j] = true;
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 1; j < n; j++) {
            int target = arr[i][j];
            for (int k = j - 1; k >= 0; k--) {
                int pri = arr[i][k];
                pair[target][pri] = false;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (pair[i][j])
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}