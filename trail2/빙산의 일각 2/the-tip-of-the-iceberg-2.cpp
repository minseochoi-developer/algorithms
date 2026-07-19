#include <iostream>
#include <algorithm>

#define MAX_N 100
using namespace std;

int n;
int h[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;
    for (int i = 1; i < 1000; i++) {
        int cnt = 0;
        bool is_submurged = false;

        for (int j = 0; j < n; j++) {
            if (!is_submurged && i < h[j]) {
                is_submurged = true;
                cnt++;
            } else if (h[j] <= i) {
                is_submurged = false;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}