#include <iostream>
using namespace std;

bool isMultipleOf3(int num) {
    return num % 3 == 0;
}

bool isInvolveNumber(int num) {
    int q = num;

    while (q != 0) {
        int r = q % 10;
        q /= 10;

        if (r == 3 || r == 6 || r == 9) return true;
    }    

    return false;   
}

bool isMagicNumber(int num) {
    return isInvolveNumber(num) || isMultipleOf3(num);
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isMagicNumber(i)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}