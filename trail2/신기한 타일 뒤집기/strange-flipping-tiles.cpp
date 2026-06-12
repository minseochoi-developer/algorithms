#include <iostream>

#define MAX_TILE 200000
using namespace std;

int n;
int tile[MAX_TILE + 1];

int main() {
    // Please write your code here.
    cin >> n;

    int cur = MAX_TILE / 2;

    for (int i = 0; i < n; i++) {
        int dist;
        char dic;
        cin >> dist >> dic;

        while(dist--) {
            if (dic == 'L') {
                tile[cur] = 1;
                if (dist)
                    cur--;
            } else {
                tile[cur] = 2;
                if (dist)
                    cur++;
            }
        }
    }

    int cnt_w = 0, cnt_b = 0;
    for (int i = 0; i <= MAX_TILE; i++) {
        if (tile[i] == 1)
            cnt_w++;
        else if (tile[i] == 2)
            cnt_b++;
    }

    cout << cnt_w << " " << cnt_b << endl;
    return 0;
}