#include <iostream>
#include <algorithm>

using namespace std;

int x, y;

int DigitSum(int n) {
    if (n < 10)
        return n;
    else
        return DigitSum(n / 10) + n % 10;
}

int main() {
    // Please write your code here.
    cin >> x >> y;

    int max_num = 0;

    for (int i = x; i <= y; i++) {
        max_num = max(max_num, DigitSum(i));
    }

    cout << max_num << endl;
    
    return 0;
}