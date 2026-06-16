#include <iostream>

using namespace std;

int x = 0, y = 0, move_dir = 0;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int ans = -1;  

void Move(char ch) {
    if (ch == 'L')
        move_dir = (move_dir + 3) % 4;
    else if (ch == 'R')
        move_dir = (move_dir + 1) % 4;
    else {
        x = x + dx[move_dir], y = y + dy[move_dir];
    }
}

int main() {
    // Please write your code here.
    string cmd;
    cin >> cmd;

    int time = 0;
    for (int i = 0; i < cmd.size(); i++) {
        Move(cmd[i]);
        time++;
        
        if (x == 0 && y == 0) {
            ans = time;
            break;
        }
    }
    
    cout << ans << endl;

    return 0;
}