#include <iostream>

#define MAX_R 100

using namespace std;

int n, m;
int grid[MAX_R][MAX_R];
int x, y, dir_num;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void Simulate() {
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    int nx = x + dx[dir_num], ny = y + dy[dir_num];

    if (!InRange(nx, ny) || grid[nx][ny] != 0)
        dir_num = (dir_num + 1) % 4;
    
    x = x + dx[dir_num], y = y + dy[dir_num];
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    for (int num = 1; num <= n * m; num++) {
        grid[x][y] = num;
        Simulate();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}