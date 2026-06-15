#include <iostream>

#define MAX_DIS 2000000

using namespace std;

int n, m;
int robot_a[MAX_DIS + 1], robot_b[MAX_DIS + 1];

int main() {
    // Please write your code here.
    cin >> n >> m;

    int time_a = 1;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        while (t--) {
            if (d == 'L')
                robot_a[time_a] = robot_a[time_a - 1] - 1;
            else
                robot_a[time_a] = robot_a[time_a - 1] + 1;
            
            time_a++;
        }
    }

    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        while (t--) {
            if (d == 'L')
                robot_b[time_b] = robot_b[time_b - 1] - 1;
            else
                robot_b[time_b] = robot_b[time_b - 1] + 1;
            
            time_b++;
        }
    }

    if (time_a < time_b) {
        for (int i = time_a; i < time_b; i++) {
            robot_a[i] = robot_a[i - 1];
        }
    } else if (time_a > time_b) {
        for (int i = time_b; i < time_a; i++) {
            robot_b[i] = robot_b[i - 1];
        }
    }

    int ans = 0;
    int time_max = 0;
    if (time_a > time_b)
        time_max = time_a;
    else
        time_max = time_b;

    for (int i = 1; i < time_max; i++) {
        if (robot_a[i] == robot_b[i] && robot_a[i - 1] != robot_b[i - 1])
            ans++;
    }

    cout << ans << endl;

    return 0;
}