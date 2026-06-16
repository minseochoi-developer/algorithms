#include <iostream>

#define DIR_NUM 4

using namespace std;

int n;

int GetDir(char d) {
    if (d == 'W')
        return 0;
    else if (d == 'S')
        return 1;
    else if (d == 'N')
        return 2;
    else if (d == 'E')
        return 3;
}

int main() {
    // Please write your code here.
    cin >> n;

    int x = 0, y = 0;
    int dx[DIR_NUM] = {0, 1, -1, 0}, dy[DIR_NUM] = {-1, 0, 0, 1};
    int t = 0, ans = -1;

    while(n--) {
        char dir;
        int dis;
        cin >> dir >> dis;
        int move_dir = GetDir(dir);

        while(dis--) {
            t++;
            x = x + dx[move_dir], y = y + dy[move_dir];
            if (x == 0 && y == 0) {
                ans = t;
                break;
            }
        }
        
        if (ans == t) break;
    }

    cout << ans << endl;
    
    return 0;
}