#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, checked[201] = {0, };
    cin >> n;
    int loc = 100;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'R') {
            for (int step = loc; step < loc + x; step++) {
                checked[step]++;
            }
            loc += x;
        } else {
            for (int step = loc - x; step < loc; step++) {
                checked[step]++;
            }
            loc -= x;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= 200; i++) {
        if (checked[i] >= 2)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}