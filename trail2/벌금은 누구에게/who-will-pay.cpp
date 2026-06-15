#include <iostream>

#define MAX_N 100

using namespace std;

int n, k, m;
int students[MAX_N + 1];

int main() {
    // Please write your code here.
    cin >> n >> m >> k;

    int ans = -1;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;

        students[num]++;

        if (students[num] == k) {
            ans = num;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}