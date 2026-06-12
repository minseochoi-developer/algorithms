#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // N(a) -> N(b)
    int a, b;
    string n;
    cin >> a >> b >> n;

    int num = 0;
    for (int i = 0; i < (int)n.size(); i++) {
        num = num * a + (n[i] - '0');
    }

    int digits[20], cnt = 0;

    while(true) {
        if (num < b) {
            digits[cnt] = num;
            break;
        }

        digits[cnt++] = num % b;
        num /= b;
    }

    for (int i = cnt; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}