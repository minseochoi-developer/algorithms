#include <iostream>
#include <climits>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
int arr[MAX_N];

int main() {
    // Please write your code here.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for (int i = 1; i <= 10000 - k; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < i)
                cost += i - arr[j];
            else if (arr[j] > i + k)
                cost += arr[j] - (i + k); 
        }
        ans = min(ans, cost);
    }
    
    cout << ans;
    return 0;
}