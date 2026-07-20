#include <iostream>
using namespace std;

int winner[3];

int main() {
    // Please write your code here.
    for (int i = 0; i < 3; i++) {
            cin >> winner[i];
    }

    int ans = 0;

    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            for (int c = 1; c < 10; c++) {
                bool is_win = false;

                if (a == b && b == c)
                    continue;
                if (a != b && b != c && c != a)
                    continue;

                // 가로
                for (int i = 0; i < 3; i++) {
                    if(winner[i] / 100 == a && (winner[i] / 10) % 10 == b && winner[i] % 10 == c) {
                        is_win = true;
                        break;
                    }
                }

                // 세로
                if (winner[0] / 100 == a && winner[1] / 100 == b && winner[2] / 100 == c)
                    is_win = true;
                else if (((winner[0] / 10) % 10) == a && ((winner[1] / 10) % 10) == b && ((winner[2] / 10) % 10) == c)
                    is_win = true;
                else if (winner[0] % 10 == a && winner[1] % 10 == b && winner[2] % 10 == c)
                    is_win = true;

                // 대각선
                if (winner[0] / 100 == a && (winner[1] / 10) % 10 == b && winner[2] % 10 == c)
                    is_win = true;
                
                // reverse 대각선
                if (winner[0] % 10 == a && (winner[1] / 10) % 10 == b && winner[2] / 100 == c)
                    is_win = true;
                
                if (is_win) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}