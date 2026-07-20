#include <iostream>

using namespace std;

int X, Y;

bool IsPalindrom(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        reverse *= 10;
        reverse += num % 10;
        num /= 10; 
    }

    return original == reverse;
}

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int ans = 0;
    for (int i = X; i <= Y; i++) {
        if(IsPalindrom(i))
            ans++;
    }

    cout << ans << endl;

    return 0;
}