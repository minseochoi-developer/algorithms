#include <iostream>
using namespace std;

void printSquare(int n) {
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (num > 9) num = 1;

            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    printSquare(n);

    return 0;
}