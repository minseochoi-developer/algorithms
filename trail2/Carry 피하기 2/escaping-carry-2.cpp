#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int arr[20];

bool IsNoCarry(int a, int b, int c) {
    while (a != 0 || b != 0 || c != 0) {
        int sum = (a % 10) + (b % 10) + (c % 10);
        if (sum >= 10)
            return false;
        
        a /= 10; b /= 10; c /= 10;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if(IsNoCarry(arr[i], arr[j], arr[k])) {
                    int sum = arr[i] + arr[j] + arr[k];
                    ans = max(ans, sum);
                }
            }
        }
    }

        cout << ans << endl;

    return 0;
}