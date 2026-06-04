#include <iostream>
using namespace std;

void PrintReverseNum(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    PrintReverseNum(n - 1);
}

void PrintNumber(int n) {
    if (n == 0)
        return;
    
    PrintNumber(n - 1);
    cout << n << " ";
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintNumber(n);
    cout << endl;
    PrintReverseNum(n);

    return 0;
}