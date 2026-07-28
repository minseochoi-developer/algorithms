#include <iostream>

#define MAX_N 100
using namespace std;

int n, m;
int arr[MAX_N];

bool is_possible(int target) {
    int cnt = 1;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        if (current_sum + arr[i] > target) {
            cnt++;
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }
    }
    return cnt <= m;
}

int main() {
    // Please write your code here.
    int max_num = 0, arr_sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_num = max(max_num, arr[i]);
        arr_sum += arr[i];
    }

    for (int target = max_num; target <= arr_sum; target++) {
        if (is_possible(target)) {
            cout << target;
            break;
        }
    }
    return 0;
}