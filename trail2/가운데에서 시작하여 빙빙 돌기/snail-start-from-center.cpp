#include <iostream>

using namespace std;

int n;
int grid[100][100];
int x, y;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n;

    // Please write your code here.

    int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};
    x = n / 2, y = n / 2;
    grid[x][y] = 1;

    int dir_num = 0;
    int num = 2;
    while (num <= n * n) {
        x = x + dx[dir_num], y = y + dy[dir_num];
        grid[x][y] = num++;

        int ndir = (dir_num + 1) % 4;
        int nx = x + dx[ndir], ny = y + dy[ndir];
        if (InRange(nx, ny) && grid[nx][ny] == 0)
            dir_num = ndir;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
