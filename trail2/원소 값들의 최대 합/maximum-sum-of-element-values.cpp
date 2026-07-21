#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, m;
int arr[MAX_N + 1];

int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        int ccur = i;
        for (int j = 0; j < m; j++) {
            ccur = arr[ccur];
            sum += ccur;
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}