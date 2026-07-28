#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long x;

int main() {
    // Please write your code here.
    cin >> x;

    long long k = sqrt(x);

    if (k * k == x)
        cout << 2 * k - 1;
    else if (x <= k * k + k)
        cout << 2 * k;
    else
        cout << 2 * k + 1;

    return 0;
}