#include <iostream>
using namespace std;

void modify(int &a, int &b) {
    if (a > b) {
        a *= 2;
        b += 10;
    } else {
        a += 10;
        b *= 2;
    }

    return;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    modify(a, b);

    cout << a << " " << b << endl;

    return 0;
}