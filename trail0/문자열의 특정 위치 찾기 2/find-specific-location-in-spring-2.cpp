#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char ch;
    cin >> ch;

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        string fruit = str[i];
        if ((fruit[2] == ch) || (fruit[3] == ch)) {
            cnt++;
            cout << fruit << "\n";
        }
    }

    cout << cnt << endl;
    
    return 0;
}