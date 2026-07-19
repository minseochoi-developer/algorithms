#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[100];

int GetCnt(int k) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (k - a[i] == a[j] - k)
                cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int ans = 0;
    
    for (int k = 2; k < 100; k++) {
        ans = max(ans, GetCnt(k));
    }

    cout << ans << endl;

    return 0;
}