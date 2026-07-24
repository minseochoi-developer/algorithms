#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
string str;

int GetMinDist() {
    int min_dist = n;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] == '1' && str[j] == '1')
                min_dist = min(min_dist, j - i);
        }
    }
    return min_dist;
}

int main() {
    // Please write your code here.
    cin >> n >> str;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1')
            continue;
        for (int j = i + 1; j < n; j++) {
            if (str[j] == '1')
                continue;
            
            str[i] = '1';
            str[j] = '1';
            
            ans = max(ans, GetMinDist());

            str[i] = '0';
            str[j] = '0';
        }
    }

    cout << ans << endl;

    return 0;
}