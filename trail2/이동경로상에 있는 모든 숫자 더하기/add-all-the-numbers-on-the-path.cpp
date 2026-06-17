#include <iostream>
using namespace std;

int n, t;
string cmd;
int arr[100][100];

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    cin >> n >> t >> cmd;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int x = n / 2, y = n / 2, dir_num = 0;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
    int sum = arr[x][y];

    for (int i = 0; i < t; i++) {
        char ch = cmd[i];
        if (ch == 'L')
            dir_num = (dir_num + 1) % 4;
        else if (ch == 'R')
            dir_num = (dir_num + 3) % 4;
        else if (ch == 'F') {
            int nx = x + dx[dir_num], ny = y + dy[dir_num];
            if (InRange(nx, ny)) {
                x = x + dx[dir_num], y = y + dy[dir_num];
                sum += arr[x][y];
            }
        }
    }

    cout << sum << endl;

    return 0;
}