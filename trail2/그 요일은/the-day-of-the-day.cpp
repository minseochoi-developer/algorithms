#include <iostream>
#include <string>

using namespace std;

int NumOfDays(int m, int d) {
    int dates[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_dates = 0;

    for (int i = 1; i < m; i++) {
        total_dates += dates[i];
    }

    total_dates += d;
    return total_dates;
}

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int num_of_dates = NumOfDays(m2, d2) - NumOfDays(m1, d1);
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int target_idx = 0;
    
    while(A != days[target_idx]) {
        target_idx++;
    }

    if (target_idx <= num_of_dates % 7)
        cout << num_of_dates / 7 + 1 << endl;
    else
        cout << num_of_dates / 7 << endl;

    return 0;
}