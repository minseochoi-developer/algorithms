#include <iostream>
#include <climits>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
int arr[MAX_N + 1];

bool IsPossible(int max_val) {
    int available_indices[MAX_N] = {};
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (arr[i] <= max_val)
            available_indices[cnt++] = i;
    }
    
    for (int i = 1; i < cnt; i++) {
        int dist = available_indices[i] - available_indices[i - 1];
        if (dist > k)
            return false;
    }
    return true;
}

int main() {
    // Please write your code here.
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (arr[i] < arr[1] || arr[i] < arr[n])
            continue;

        if (IsPossible(arr[i]))
            ans = min(ans, arr[i]);
    }

    cout << ans << endl;
    return 0;
}