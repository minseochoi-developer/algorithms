#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int candy[100], pos[100];
int arr[101];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];

        arr[pos[i]] += candy[i];
    }

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        int cnt = 0;
        for (int j = i - K; j <= i + K; j++) {
            if (j >= 0 && j <= 100)
                cnt += arr[j];
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}