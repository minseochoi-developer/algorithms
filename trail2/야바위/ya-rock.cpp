#include <iostream>
#include <algorithm>

#define MAX_N 100
using namespace std;

int n;
int a[MAX_N], b[MAX_N], c[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    
    int ans = 0;
    for (int i = 1; i <= 3; i++) {
        bool stone[4] = {false, };
        stone[i] = true;

        int cnt = 0;
        for (int j = 0; j < n; j++) {
            bool temp = stone[a[j]];
            stone[a[j]] = stone[b[j]];
            stone[b[j]] = temp;

            if (stone[c[j]])
                cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
    
    return 0;
}