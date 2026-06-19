#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int ans = 0;
    for (int i = 1; i < (int)A.size(); i++) {
        if (A[i - 1] != '(' || A[i] != '(')
            continue;
        
        for (int j = i + 1; j < (int)A.size() - 1; j++) {
            if (A[j] == ')' && A[j + 1] == ')')
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}