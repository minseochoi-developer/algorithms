#include <iostream>
using namespace std;

int NumOfDays(int m, int d) {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 1; i < m; i++) {
        total_days += num_of_days[i];
    }

    total_days += d;

    return total_days;
}

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    cout << NumOfDays(m2, d2) - NumOfDays(m1, d1) + 1<< endl;

    return 0;
}