#include <iostream>
using namespace std;

int a, b;

void modify(int &a, int &b) {
    if (a > b) {
        a += 25;
        b *= 2;
    } else {
        a *= 2;
        b += 25;
    }
}

int main() {
    // Please write your code here.
    cin >> a >> b;

    modify(a, b);

    cout << a << " " << b << endl;

    return 0;
}