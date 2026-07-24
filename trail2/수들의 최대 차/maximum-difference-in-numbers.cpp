#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, k;
int arr[MAX_N];

int main() {
    // Please write your code here.
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);

    int ans = 0;
    for (int i = 1; i <= 10000 - k; i++) {
        int min_num = i;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= min_num && arr[j] <= min_num + k)
                cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}