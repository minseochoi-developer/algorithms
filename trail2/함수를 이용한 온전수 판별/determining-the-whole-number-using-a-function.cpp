#include <iostream>
using namespace std;

bool IsOnjunsu(int num) {
    if (num % 2 == 0) 
        return false;
    
    if (num % 10 == 5)
        return false;
    
    if (num % 3 == 0 && num % 9 != 0)
        return false;

    return true;
}

int main() {
    // Please write your code here.
    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (IsOnjunsu(i)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}