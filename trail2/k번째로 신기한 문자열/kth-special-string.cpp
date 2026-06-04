#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 100

using namespace std;

string t;
string arr[MAX_N];

bool IsStartWithT(string str) {
    if (str.substr(0, t.length()) == t)
        return true;
    else
        return false;
}

int main() {
    // Please write your code here.
    int n, k;

    cin >> n >> k >> t;

    int idx = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if(IsStartWithT(str))
            arr[idx++] = str;
    }

    sort(arr, arr + idx);

    cout << arr[k - 1] << endl;

    return 0;
}