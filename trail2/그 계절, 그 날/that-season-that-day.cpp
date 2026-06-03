#include <iostream>

using namespace std;

int Y, M, D;

string getSeason() {
    if (3 <= M && M <= 5)
        return "Spring";
    else if (6 <= M && M <= 8)
        return "Summer";
    else if (9 <= M && M <= 11)
        return "Fall";
    
    return "Winter";
}

bool isLeanYear() {
    if (Y % 4 == 0) {
        if (Y % 100 != 0)
            return true;

        if (Y % 100 == 0 && Y % 400 == 0)
            return true;
    }

    return false;
}

int getLastDay() {
    if (M == 2) {
        if (isLeanYear())
            return 29;
        else
            return 28;
    } else if (M == 4 || M == 6 || M == 9 || M == 11) {
        return 30;
    }

    return 31;
}
 
bool judgeDay() {
    if (M <= 12 && D <= getLastDay())
        return true;
    
    return false;
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if (judgeDay())
        cout << getSeason() << endl;
    else
        cout << -1 << endl;

    return 0;
}