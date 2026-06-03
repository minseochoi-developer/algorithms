#include <iostream>
using namespace std;

bool isDay(int month, int day) {
    if (month <= 7) {
        if (month % 2 == 0) {
            if (month == 2) {
                if (day <= 28)
                    return true;
                else
                    return false;
            } else {
                if (day <= 30)
                    return true;
                else
                    return false;
            }
        } else {
            if (day <= 31)
                return true;
            else
                return false;
        }
    } else if (month <= 12) {
        if (month % 2 == 0)
            if (day <= 31)
                return true;
            else
                return false;
        else
            if (day <= 30)
                return true;
            else
                return false;
    }
    
    return false;
}

int main() {
    // Please write your code here.
    int m, d;
    cin >> m >> d;

    if (isDay(m, d))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}