#include <iostream>

using namespace std;

int a;
int c;
char o;

int getSum(int a, int c) {
    return a + c;
}

int getMinus(int a, int c) {
    return a - c;
}

int getDivide(int a, int c) {
    return a / c;
}

int getMultiple(int a, int c) {
    return a * c;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    int result = 0;

    if (o == '+') {
        result = getSum(a, c);
    } else if (o == '-') {
        result = getMinus(a, c);
    } else if (o == '/') {
        result = getDivide(a, c);
    } else if (o == '*') {
        result = getMultiple(a, c);
    } else {
        cout << "False" << endl;
        return 0;
    }

    cout << a << " " << o << " " << c << " = " << result << endl; 

    return 0;
}