#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

int main() {
    // Please write your code here.
    cin >> a >> b >> c;

    int ans = 0;
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            int sum = (a * i) + (b * j);
            if (sum <= c)
                ans = max(ans, sum);
            else
                break;
        }
    }

    cout << ans << endl;

    return 0;
}