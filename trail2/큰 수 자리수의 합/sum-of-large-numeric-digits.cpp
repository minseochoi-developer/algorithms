#include <iostream>

using namespace std;

int a, b, c;

int GetSumOfPart(int num) {
    if (num < 10)
        return num;
    
    int digit = num % 10;

    return GetSumOfPart(num / 10) + digit;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int multiple = a * b * c;

    cout << GetSumOfPart(multiple) << endl;

    return 0;
}