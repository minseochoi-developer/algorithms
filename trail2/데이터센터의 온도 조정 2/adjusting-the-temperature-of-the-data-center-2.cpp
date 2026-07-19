#include <iostream>
#include <algorithm>

#define MAX_N 1000
using namespace std;

int n, c, g, h;
int t_a[MAX_N], t_b[MAX_N];

int GetTask(int temperature) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (temperature < t_a[i])
            sum += c;
        else if (temperature >= t_a[i] && temperature <= t_b[i])
            sum += g;
        else if (temperature > t_b[i])
            sum += h;
    }
    return sum;
}

int main() {
    // Please write your code here.
    cin >> n >> c >> g >> h;

    for (int i = 0; i < n; i++)
        cin >> t_a[i] >> t_b[i];

    int ans = 0;

    for (int i = -1; i <= 1001; i++) {
        ans = max(ans, GetTask(i));
    } 

    cout << ans << endl;
    return 0;
}