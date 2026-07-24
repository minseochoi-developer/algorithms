#include <iostream>
#include <algorithm>

using namespace std;

int arr[15];

bool is_matched(int i, int j, int k, int l) {
    int new_arr[15] = {i, j, k, l, 
                       i + j, j + k, k + l, l + i, i + k, j + l, 
                       i + j + k, i + j + l, i + k + l, j + k + l,
                       i + j + k + l};
    sort(new_arr, new_arr+15);

    for (int i = 0; i < 15; i++) {
        if (arr[i] != new_arr[i])
            return false;
    }
    return true;
}

int main() {
    // Please write your code here.
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    
    sort(arr, arr+15);

    int a, b, c, d;
    for (int i = 1; i <= 40; i++) {
        for (int j = i; j <= 40; j++) {
            for (int k = j; k <= 40; k++) {
                for (int l = k; l <= 40; l++) {
                    if (is_matched(i, j, k, l)) {
                        a = i;
                        b = j;
                        c = k;
                        d = l;
                    }
                }
            }
        }
    }

    cout << a << " " << b << " " << c << " " << d; 
    return 0;
}