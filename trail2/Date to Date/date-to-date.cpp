#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    if (m1 == m2) {
        cout << d2 - d1 + 1 << endl;
        return 0;
    }

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int elapsed_days = 0;

    for (int i = m1; i <= m2; i++) {
        if (i == m1)
            elapsed_days += num_of_days[i] - d1 + 1;
        else if (i == m2)
            elapsed_days += d2;
        else
            elapsed_days += num_of_days[i];
    }

    cout << elapsed_days << endl;

    return 0;
}