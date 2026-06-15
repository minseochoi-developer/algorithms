#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] > t)
            cnt++;
        else
            cnt = 0;
        
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}