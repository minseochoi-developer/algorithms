#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (num[i] % 2 == 0)
            cout << num[i] << " ";
    }
    
    return 0;
}