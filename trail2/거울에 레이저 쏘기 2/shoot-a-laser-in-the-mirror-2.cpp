#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;
int x, y, dir_num;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

void GetInitGrid() {
    for (int i = 2; i <= k; i++) {
        if ((i - 1) % n == 0)
            continue;

        int dir = (i - 1) / n;
        x = x + dx[(dir + 3) % 4];
        y = y + dy[(dir + 3) % 4];
    }
}

bool InRange() {
    return x >= 0 && x < n && y >= 0 && y < n;
}

void Simulate() {
    if (grid[x][y] == '\\')
        dir_num = (3 - dir_num) % 4;
    else
        dir_num = (5 - dir_num) % 4;
    
    x = x + dx[dir_num], y = y + dy[dir_num];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    // Please write your code here.
    dir_num = (k - 1) / n;
    GetInitGrid();
    int ans = 0;

    while (InRange()) {
        Simulate();    
        ans++;
    }

    cout << ans << endl;
    
    return 0;
}