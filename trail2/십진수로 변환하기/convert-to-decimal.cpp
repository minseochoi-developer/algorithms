#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int digit, num = 0;
    int digits[8], cnt = 0;

    cin >> digit;

    while (digit != 0) {
        digits[cnt++] = digit % 10;
        digit /= 10;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        num = num * 2 + digits[i];
    }

    cout << num << endl;

    return 0;
}