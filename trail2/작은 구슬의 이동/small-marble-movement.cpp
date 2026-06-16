#include <iostream>

#define DIR_NUM 4
#define MAX_N 50
using namespace std;

int n, r, c;
int grid[MAX_N][MAX_N];
int move_dir;

bool InRange(int r, int c) {
    return r > 0 && r <= n && c > 0 && c <= n;
}

int GetDir(char a) {
    if(a == 'U')
        return 0;
    else if (a == 'R') 
        return 1;
    else if (a == 'L')
        return 2;
    else if (a == 'D')
        return 3;
}

void MoveBall() {
    int dr[DIR_NUM] = {-1, 0, 0, 1}, dc[DIR_NUM] = {0, 1, -1, 0};
    int cur_r = r + dr[move_dir], cur_c = c + dc[move_dir];

    if (InRange(cur_r, cur_c)) {
        r = cur_r;
        c = cur_c;
    } else {
        move_dir = 3 - move_dir;
    }
}

int main() {
    // Please write your code here.
    int t;
    char d;
    cin >> n >> t;
    cin >> r >> c >> d;

    move_dir = GetDir(d);

    for (int time = 0; time < t; time++)
        MoveBall();

    cout << r << " " << c;
    return 0;
}