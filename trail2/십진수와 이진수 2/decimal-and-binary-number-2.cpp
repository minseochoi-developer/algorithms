#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string binary;
    cin >> binary;

    int num = 0;
    for (int i = 0; i < (int) binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }

    num *= 17;

    int digits[20], cnt = 0;

    while (true) {
        if (num < 2) {
            digits[cnt] = num;
            break;
        }

        digits[cnt++] = num % 2;
        num /= 2;
    }

    for (int i = cnt; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}