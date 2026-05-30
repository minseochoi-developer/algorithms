#include <iostream>
using namespace std;

bool isEvenMultipleOf5(int n) {
    return n % 2 == 0 && ((n / 10) + (n % 10)) % 5 == 0;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    if (isEvenMultipleOf5(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}