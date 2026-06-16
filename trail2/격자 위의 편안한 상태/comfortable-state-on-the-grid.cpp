#include <iostream>

#define MAX_N 100

using namespace std;

int n, m;
int grid[MAX_N][MAX_N];
int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool IsComfort(int x, int y) {
    int cnt = 0;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if (InRange(nx, ny) && grid[nx][ny] == 1)
            cnt++;
    }
    return cnt == 3;
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    while(m--) {
        int row, col;
        cin >> row >> col;
        row--; col--;
        grid[row][col] = 1;

        if (IsComfort(row, col))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}