#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num[10];
    cin >> num[0] >> num[1];

    for (int i = 2; i < 10; i++) {
        num[i] = (num[i - 1] + num[i - 2]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }

    return 0;
}