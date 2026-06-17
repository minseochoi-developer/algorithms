#include <iostream>

#define MAX_R 100

using namespace std;

int n, m;
int x, y, dir_num;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
char grid[MAX_R][MAX_R];

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    
    grid[0][0] = 'A';

    for (int i = 2; i <= n * m; i++) {
        while (true) {
            int nx = x + dx[dir_num], ny = y + dy[dir_num];

            if (InRange(nx, ny) && !grid[nx][ny]) {
                x = x + dx[dir_num];
                y = y + dy[dir_num];
                grid[x][y] = 'A' + ((i - 1) % 26);
                break;
            } else {
                dir_num = (dir_num + 1) % 4;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}