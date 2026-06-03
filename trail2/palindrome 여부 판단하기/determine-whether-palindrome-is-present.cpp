#include <iostream>
using namespace std;

string a;

void isPalindrome(string &reverse_a) {
    for (int i = 0; i < a.length(); i++) {
        reverse_a[i] = a[a.length() - i - 1];
    }
}

int main() {
    // Please write your code here.
    cin >> a;

    string reverse_a = a;

    isPalindrome(reverse_a);

    if (a == reverse_a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}