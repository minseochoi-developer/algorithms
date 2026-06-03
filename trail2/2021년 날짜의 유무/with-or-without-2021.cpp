#include <iostream>

using namespace std;

int M, D;

int getLastDay() {
    if (M == 2)
        return 28;
    else if (M == 4 || M == 6 || M == 9 || M == 11)
        return 30;
    
    return 31;
}

bool isDay() {
    if (M <= 12 && D <= getLastDay())
        return true;
    
    return false;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if (isDay())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}