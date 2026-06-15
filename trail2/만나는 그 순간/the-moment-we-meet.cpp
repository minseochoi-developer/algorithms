#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int arr_a[1000000], arr_b[1000000];

    int dist = 0, idx = 1;
    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int time = 0; time < t; time++) {
            if (d == 'L')
                dist--;
            else
                dist++;

            arr_a[idx++] = dist;
        }
    }

    dist = 0, idx = 1;
    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int time = 0; time < t; time++) {
            if (d == 'L')
                dist--;
            else
                dist++;

            arr_b[idx++] = dist;
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