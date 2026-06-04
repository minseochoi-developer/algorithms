#include <iostream>

using namespace std;

int n;

int GetCnt(int n) {
    if (n == 1)
        return 0;

    if (n % 2 == 0)
        return GetCnt(n / 2) + 1;
    else
        return GetCnt(n * 3 + 1) + 1;
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << GetCnt(n) << endl;

    return 0;
}