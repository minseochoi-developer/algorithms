#include <iostream>
using namespace std;

int getDivide(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum / 10;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int div = getDivide(n);

    cout << div << endl;
    return 0;
}