#include <iostream>
#include <algorithm>

#define MAX_N 100
using namespace std;

int n, l;
int arr[MAX_N];

int main() {
    // Please write your code here.
    cin >> n >> l;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);

    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        int l_cnt = 0, h_cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i)
                h_cnt++;
            else if (arr[j] + 1 == i && l_cnt < l) {
                l_cnt++;
                h_cnt++;
            }
        }

        if (h_cnt >= i)
            ans = i;
    }

    cout << ans << endl;

    return 0;
}