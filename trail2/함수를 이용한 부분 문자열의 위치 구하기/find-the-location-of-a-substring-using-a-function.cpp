#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool isSameStr(int i) {
    int len = pattern.length();
    int idx = 0;

    for (int start = i; start < i + len; start++) {
        if (text[start] != pattern[idx++])
            return false;
    }

    return true;
}

int GetStartIndex() {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == pattern[0]) {
            if (isSameStr(i)) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    int idx = GetStartIndex();

    cout << idx << endl;

    return 0;
}