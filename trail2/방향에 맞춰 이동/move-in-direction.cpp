#include <iostream>
using namespace std;

int n;

int main() {
    // Please write your code here.
    cin >> n;
    int x = 0, y = 0;
    int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};

    for (int i = 0; i < n; i++) {
        char dir;
        int dis;
        cin >> dir >> dis;

        if (dir == 'W') {
            x += dx[0] * dis;
            y += dy[0] * dis;
        } else if (dir == 'S') {
            x += dx[1] * dis;
            y += dy[1] * dis;
        } else if (dir == 'N') {
            x += dx[2] * dis;
            y += dy[2] * dis;
        } else {
            x += dx[3] * dis;
            y += dy[3] * dis;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}