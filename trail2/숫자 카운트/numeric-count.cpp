#include <iostream>

using namespace std;

int n;
int a[10], b[10], c[10];

bool IsPossible(int h, int t, int o) {
    for (int i = 0; i < n; i++) {
        int cnt_1 = 0, cnt_2 = 0;

        if (h == a[i] / 100)
            cnt_1++;
        else if (h == (a[i] / 10) % 10 || h == a[i] % 10)
            cnt_2++;

        if (t == (a[i] / 10) % 10)
            cnt_1++;
        else if (t == a[i] / 100 || t == a[i] % 10)
            cnt_2++;
        
        if (o == a[i] % 10)
            cnt_1++;
        else if (o == a[i] / 100 || o == (a[i] / 10) % 10)
            cnt_2++;
        
        if (cnt_1 != b[i] || cnt_2 != c[i])
            return false;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    // Please write your code here.
    int cnt = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                if (i == j || i == k || j == k) continue;

                if (IsPossible(i, j, k))
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}