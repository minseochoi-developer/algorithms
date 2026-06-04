#include <iostream>

using namespace std;

int GetSumOfSquare(int n) {
    if (n < 10)
        return n * n;
    
    return GetSumOfSquare(n/10) + (n % 10) * (n % 10);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetSumOfSquare(n) << endl;

    return 0;
}