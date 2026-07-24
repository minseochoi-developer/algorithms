#include <iostream>

#define MAX_N 10
using namespace std;

int n;
int a[MAX_N], b[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    
    int ans = 0;
    for (int i = 1; i <= 5000; i++) {
        int x = i;
        bool is_satisfy = true;
        for (int j = 0; j < n; j++) {
            x *= 2;
            if (x < a[j] || x > b[j]) {
                is_satisfy = false;
                break;
            }
        }
        if (is_satisfy) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}