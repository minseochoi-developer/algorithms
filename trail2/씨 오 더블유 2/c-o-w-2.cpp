#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i < (int)str.size() - 2; i++) {
        if (str[i] != 'C') continue;
        for (int j = i + 1; j < (int)str.size() - 1; j++) {
            if (str[j] != 'O') continue;
            for(int k = j + 1; k < (int)str.size(); k++) {
                if (str[k] == 'W') ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}