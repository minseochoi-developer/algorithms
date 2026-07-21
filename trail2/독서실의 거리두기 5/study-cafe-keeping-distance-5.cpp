#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 20

using namespace std;

int n;
string str;
int arr[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        arr[i] = str[i] - '0';
    }

    int max_dist = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1)
            continue;
        
        arr[i] = 1;
        int min_dist = 20, prev_seat = -1;
        for (int j = 0; j < n; j++) {
            if (prev_seat == -1 && arr[j] == 1) {
                prev_seat = j;
                continue;
            } else if (arr[j] == 1) {
                min_dist = min(min_dist, j - prev_seat);
                prev_seat = j;
            }
        }
        
        max_dist = max(max_dist, min_dist);
        arr[i] = 0;
    }

    cout << max_dist << endl;

    return 0;
}