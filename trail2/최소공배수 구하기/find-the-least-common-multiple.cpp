#include <iostream>

using namespace std;

int n, m;

void lcm(int n, int m) {
    int a = n, b = m;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << n * m / a << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    lcm(n, m);

    return 0;
}