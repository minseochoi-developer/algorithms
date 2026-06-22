#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int x[100];
char c[100];
char pic[10001];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        pic[x[i]] = c[i];
    }

    int ans = 0;
    for (int i = 1; i <= 10000 - K; i++) {
        int score = 0;
        for (int j = i; j <= i + K; j++) {
            if (pic[j] == 'G') score += 1;
            if (pic[j] == 'H') score += 2;
        }
        ans = max(ans, score);
    }

    cout << ans << endl;

    return 0;
}