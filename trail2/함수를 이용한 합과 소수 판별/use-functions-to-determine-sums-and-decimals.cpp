#include <iostream>
using namespace std;

bool isEvenSum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum % 2 == 0;
}

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) 
            return false;
    }

    return true;
}

int main() {
    // Please write your code here.
    int a, b, cnt = 0;
    cin >> a >> b;

    for (int num = a; num <= b; num++) {
        if (isPrime(num) && isEvenSum(num)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}