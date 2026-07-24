#include <iostream>
#include <algorithm>

#define MAX_M 100
using namespace std;

int n, m;
int a[MAX_M], b[MAX_M];

int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int cnt = 0;
            for (int k = 0; k < m; k++) {
                if (a[k] == i && b[k] == j)
                    cnt++;
                else if (a[k] == j && b[k] == i)
                    cnt++;
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
    
    return 0;
}