#include <iostream>
#include <string>

using namespace std;

string A;

bool judgeAlphabet(string a) {
    for(int i = 1; i < a.length(); i++) {
        if (a[i] != a[0])
            return true;
    }

    return false;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(judgeAlphabet(A))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}