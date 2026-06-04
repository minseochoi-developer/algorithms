#include <iostream>
using namespace std;

int GetSum(int n) {
    if (n == 1 || n == 2)
        return n;
    
    return GetSum(n - 2) + n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetSum(n) << endl;

    return 0;
}