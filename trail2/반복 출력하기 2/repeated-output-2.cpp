#include <iostream>
using namespace std;

void PrintStr(int n) {
    if (n == 0)
        return;
    
    PrintStr(n - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintStr(n);

    return 0;
}