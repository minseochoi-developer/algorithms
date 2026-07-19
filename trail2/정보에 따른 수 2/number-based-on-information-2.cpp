#include <iostream>
#include <algorithm>

using namespace std;

int t;
int s_loc[100], n_loc[100];

bool IsSpecialLocation(int loc) {
    int s_min_dist = 1001;
    int n_min_dist = 1001;

    for (int i = 0; i < t; i++) {
        s_min_dist = min(s_min_dist, abs(loc - s_loc[i]));
        n_min_dist = min(n_min_dist, abs(loc - n_loc[i]));
    }

    return s_min_dist <= n_min_dist;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> t >> a >> b;

    for (int i = 0; i < t; i++) {
        char alphabet;
        cin >> alphabet;

        if (alphabet == 'S')
            cin >> s_loc[i];
        else if (alphabet == 'N')
            cin >> n_loc[i];
    }

    int ans = 0;

    for (int i = a; i <= b; i++) {
        if (IsSpecialLocation(i))
            ans++;
    }

    cout << ans << endl;

    return 0;
}