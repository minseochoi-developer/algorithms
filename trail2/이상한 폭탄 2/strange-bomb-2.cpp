#include <iostream>
#include <algorithm>

#define MAX_N 1000
using namespace std;

int n, k;
int bomb[MAX_N];

int main() {
    // Please write your code here.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> bomb[i];
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (bomb[i] == -1) continue;

        bool is_bomb = false;
        for (int j = i + 1; j <= i + k && j < n; j++) {
            if (bomb[i] != bomb[j]) continue;

            is_bomb = true;
            bomb[j] = -1;
        }

        if (is_bomb) {
            ans = max(ans, bomb[i]);
            bomb[i] = -1;
        }
    }

    cout << ans << endl;

    return 0;
}