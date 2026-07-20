#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

int main() {
    // Please write your code here.
    cin >> a >> b >> c;

    int ans = 0;
    for (int i = 0; i * a <= c; i++) {
        int sum = a * i;
        int j = (c - sum) / b;

        sum += b * j;

        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}