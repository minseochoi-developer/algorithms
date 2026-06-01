#include <iostream>

using namespace std;

int a, b;

int printSquare(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int answer = printSquare(a, b);

    cout << answer << endl;

    return 0;
}