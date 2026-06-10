#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int hour_a, minute_a, hour_b, minute_b;
    cin >> hour_a >> minute_a;
    cin >> hour_b >> minute_b;

    int time = (hour_b * 60 + minute_b) - (hour_a * 60 + minute_a);
    cout << time << endl;
    return 0;
}