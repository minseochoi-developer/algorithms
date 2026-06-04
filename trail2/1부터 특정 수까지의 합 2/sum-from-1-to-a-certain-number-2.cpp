#include <iostream>
using namespace std;

int sum = 0;

int GetSum(int n) {
    if (n == 1)
        return 1;
    
    return GetSum(n - 1) + n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetSum(n) << endl;
    return 0;
}