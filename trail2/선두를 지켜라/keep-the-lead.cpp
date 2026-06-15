#include <iostream>

#define MAX_T 1000000

using namespace std;

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    // Please write your code here.
    cin >> n >> m;

    int time_a = 1;

    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        while (t--) {
            pos_a[time_a] = pos_a[time_a - 1] + v;
            time_a++;
        }
    }

    int time_b = 1;

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        while (t--) {
            pos_b[time_b] = pos_b[time_b - 1] + v;
            time_b++;
        }
    }

    int ans = 0;
    for (int t = 1; t < time_a; t++) {
        if (pos_a[t - 1] >= pos_b[t - 1] && pos_a[t] < pos_b[t])
            ans++;
        else if (pos_b[t - 1] >= pos_a[t - 1] && pos_b[t] < pos_a[t])
            ans++;
    }

    cout << ans - 1 << endl;
    return 0;
}