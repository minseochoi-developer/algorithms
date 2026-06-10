#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int hour_a, minute_a, hour_b, minute_b;
    cin >> hour_a >> minute_a >> hour_b >> minute_b;
    
    cout << (hour_b * 60 + minute_b) - (hour_a * 60 + minute_a) << endl;
    return 0;
}