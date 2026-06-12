#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, b;
    cin >> n >> b;

    int binary[80];
    int cnt = 0;

    while(true) {
        if (n < b) {
            binary[cnt] = n;
            break;
        }

        binary[cnt++] = n % b;
        n /= b;
    }

    for (int i = cnt; i >= 0; i--) {
        cout << binary[i];
    }
    
    return 0;
}