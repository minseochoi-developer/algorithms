#include <iostream>
using namespace std;

bool isPrime(int num) {
    bool is_prime = true;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) 
            sum += i;
    }

    cout << sum << endl;

    return 0;
}