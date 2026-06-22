#include <iostream>

#define DIR_NUM 8
#define MAX_N 50
using namespace std;

int n, m;
char arr[MAX_N][MAX_N];
int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {0, 1, -1, 0, 1, -1, 1, -1};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 'L') continue;

            for (int dir = 0; dir < DIR_NUM; dir++) {
                if (!InRange(i + 2 * dx[dir], j + 2 * dy[dir])) continue;
                if (arr[i + dx[dir]][j + dy[dir]] != 'E') continue;
                if (arr[i + 2 * dx[dir]][j + 2 * dy[dir]] != 'E') continue;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}