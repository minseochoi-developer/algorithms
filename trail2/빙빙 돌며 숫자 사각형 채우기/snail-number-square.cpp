#include <iostream>

#define DIR_NUM 4
#define MAX_N 100

using namespace std;

int n, m;
int answer[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    int x = 0, y = 0;
    int dx[DIR_NUM] = {0, 1, 0, -1}, dy[DIR_NUM] = {1, 0, -1, 0};
    int dir_num = 0;    

    answer[x][y] = 1;

    for (int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if (!InRange(nx, ny) || answer[nx][ny] != 0)
            dir_num = (dir_num + 1) % 4;
        
        x = x + dx[dir_num], y = y + dy[dir_num];
        answer[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}