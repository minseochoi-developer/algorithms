#include <iostream>
#include <string>

using namespace std;

int NumOfDates(int m, int d) {
    int dates[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    cin >> m1 >> d1 >> m2 >> d2;

    int diff_days = (NumOfDates(m2, d2) - NumOfDates(m1, d1)) % 7; 

    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    if (diff_days < 0)
        cout << days[7 + diff_days] << endl;
    else
        cout << days[diff_days] << endl;

    return 0;
}