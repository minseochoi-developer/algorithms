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
        if (a[i] == '0') a[i] = '1';
        else             a[i] = '0';

        int num = 0;
        for (int j = 0; j < a.size(); j++) {
            num = num * 2 + (a[j] - '0');
        }

        ans = max(ans, num);

        if (a[i] == '0') a[i] = '1';
        else             a[i] = '0';
    }

    cout << ans << endl;
    return 0;
}