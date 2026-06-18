#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    int ans = INT_MIN;

    for (int i = 0; i < a.size(); i++) {
        a[i] = '0' + '1' - a[i];

        int num = 0;
        for (int j = 0; j < a.size(); j++) {
            num = num * 2 + (a[j] - '0');
        }

        ans = max(ans, num);

        a[i] = '0' + '1' - a[i];
    }

    cout << ans << endl;
    return 0;
}