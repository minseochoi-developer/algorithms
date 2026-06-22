#include <iostream>

#define DIR_NUM 8

using namespace std;

int board[19][19];

int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {0, 1, -1, 0, 1, -1, 1, -1};

bool InRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] == 0)   continue;

            for (int k = 0; k < DIR_NUM; k++) {
                int curt = 1;
                int curx = i;
                int cury = j;
                while(true) {
                    int nx = curx + dx[k];
                    int ny = cury + dy[k];
                    if(!InRange(nx, ny))
                        break;
                    if (board[nx][ny] != board[i][j])
                        break;
                    curt++;
                    curx = nx;
                    cury = ny;
                }
                if (curt == 5) {
                    cout << board[i][j] << endl;
                    cout << i + 2 * dx[k] + 1 << " " << j + 2 * dy[k] + 1;
                    return 0;
                }
            }
        }
    }

    cout << 0;
    return 0;
}