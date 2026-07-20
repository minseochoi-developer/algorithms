#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
int x_arr[MAX_N], y_arr[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x_arr[i] >> y_arr[i];
    }

    int ans = 100;
    for (int x = 2; x < 100; x += 2) {
        for (int y = 2; y < 100; y += 2) {
            int max_m = 0;
            int cnt = 0;
            // 1사분면
            for (int j = 0; j < n; j++) {
                if (x_arr[j] > x && y_arr[j] > y)
                    cnt++;
            }
            max_m = max(max_m, cnt);
            // 2사분면
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (x_arr[j] < x && y_arr[j] > y)
                    cnt++;
            }
            max_m = max(max_m, cnt);
            //3사분면
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (x_arr[j] < x && y_arr[j] < y)
                    cnt++;
            }
            max_m = max(max_m, cnt);
            //4사분면
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (x_arr[j] > x && y_arr[j] < y)
                    cnt++;
            }
            max_m = max(max_m, cnt);
            ans = min(ans, max_m);
        }
    }

    cout << ans << endl;

    return 0;
}