#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;

    int temp = b;
    b = a;
    a = c;
    c = temp;

    cout << a << "\n" << b << "\n" << c << endl;

    return 0;
}