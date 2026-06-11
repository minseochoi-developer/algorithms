#include <iostream>

#define HOUR 24
#define MIN 60

using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int elapsed_time = (a * HOUR * MIN + b * MIN + c) - (11 * HOUR * MIN + 11 * MIN + 11);

    if (elapsed_time < 0)
        cout << -1 << endl;
    else
        cout << elapsed_time << endl;

    return 0;
}