#include <iostream>

#define MAX_N 100
#define MAX_T 1000

using namespace std;

int n;
int a[MAX_N], b[MAX_N];
int times[MAX_T];

void ResetTime() {
    for (int i = 0; i < MAX_T; i++) {
        times[i] = 0;
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            for (int k = a[j]; k < b[j]; k++) {
                if (times[k] != 0) continue;
                
                times[k]++;
                total++;
            }
        }
        ans = max(ans, total);
        ResetTime();
    }

    cout << ans << endl;
    
    return 0;
}