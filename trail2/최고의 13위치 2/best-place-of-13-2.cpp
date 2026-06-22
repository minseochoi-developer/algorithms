#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 2; j++) {
            for (int k = 0; k < N; k++) {
                for (int l = 0; l < N - 2; l++) {
                    if (k < i || l < j) continue;
                    if (k == i && l >= j && l <= j + 2) continue;
                    int coin = 0;
                    coin = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                    coin += arr[k][l] + arr[k][l + 1] + arr[k][l + 2];
                    ans = max(ans, coin);
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}