#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] != '(')
            continue;
        
        for (int j = i + 1; j < A.size(); j++) {
            if (A[j] == ')')
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}