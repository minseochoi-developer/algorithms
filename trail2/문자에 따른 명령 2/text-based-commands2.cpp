#include <iostream>

#define DIR_NUM 4

using namespace std;

int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};

int main() {
    // Please write your code here.
    string cmds;
    cin >> cmds;

    int x = 0, y = 0, dir = 3;
    for (int i = 0; i < cmds.size(); i++) {
        char cmd = cmds[i];

        if (cmd == 'L') {
            dir = (dir + 3) % 4;
        } else if (cmd == 'R') {
            dir = (dir + 1) % 4;
        } else if (cmd == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}