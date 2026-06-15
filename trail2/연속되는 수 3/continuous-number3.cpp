#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0, max_cnt = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] > 0 && arr[i - 1] > 0) || (arr[i] < 0 && arr[i - 1] < 0))
            cnt++;
        else {
            max_cnt = max(max_cnt, cnt);
            cnt = 1;
        }
    }
    max_cnt = max(max_cnt, cnt);
    cout << max_cnt << endl;

    return 0;
}