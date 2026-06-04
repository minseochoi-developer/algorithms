#include <iostream>

using namespace std;

int N;

int F(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    return F(n / 3) + F(n - 1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << F(N) << endl;

    return 0;
}