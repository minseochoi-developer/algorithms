#include <iostream>

#define MAX_T 1000000

using namespace std;

int arr_a[MAX_T + 1], arr_b[MAX_T + 1];

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int idx = 1;
    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int time = 0; time < t; time++) {
            if (d == 'L')
                arr_a[idx] = arr_a[idx - 1] - 1;
            else
                arr_a[idx] = arr_a[idx - 1] + 1;

            idx++;
        }
    }

    idx = 1;
    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int time = 0; time < t; time++) {
            if (d == 'L')
                arr_b[idx] = arr_b[idx - 1] - 1;
            else
                arr_b[idx] = arr_b[idx - 1] + 1;

            idx++;
        }
    }

    int ans = -1;
    for (int i = 1; i < idx; i++) {
        if (arr_a[i] == arr_b[i]) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}