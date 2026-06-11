#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    cin >> n;
    vector<int> v;

    while (true) {
        if (n < 2) {
            v.push_back(n);
            break;
        }

        v.push_back(n % 2);
        n /= 2;
        cnt++;
    }

    for (int i = cnt; i >= 0; i--) {
        cout << v[i];
    }
    return 0;
}