#include <iostream>
using namespace std;

int GetCntOfCal(int n) {
    if (n == 1)
        return 0;
    
    if (n % 2 == 0) {
        return GetCntOfCal(n / 2) + 1;
    } else {
        return GetCntOfCal(n / 3) + 1;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetCntOfCal(n) << endl;

    return 0;
}