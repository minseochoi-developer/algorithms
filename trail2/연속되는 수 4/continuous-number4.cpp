#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i - 1])
            cnt++;
        else
            cnt = 1;
        
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    
    return 0;
}