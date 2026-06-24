#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = INT_MAX;
    for (int i = 0; i <= N - T; i++) {
        int money = 0;
        for (int j = i; j < i + T; j++) {
            money += abs(H - arr[j]);
        }
        ans = min(ans, money);
    }

    cout << ans << endl;
    
    return 0;
}