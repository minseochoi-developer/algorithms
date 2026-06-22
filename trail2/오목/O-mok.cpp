#include <iostream>

using namespace std;

int board[19][19];
int win_row, win_col, is_win;

bool InRange(int row, int col) {
    return row >= 0 && row < 19 && col >= 0 && col < 19;
}

bool IsWidth (int row, int col) {
    for (int i = 1; i < 5; i++) {
        if (!InRange(row, col + i) || board[row][col + i - 1] != board[row][col + i])
            return false;
    }
    return true;
}

bool IsHeight (int row, int col) {
    for (int i = 1; i < 5; i++) {
        if (!InRange(row + i, col) || board[row + i - 1][col] != board[row + i][col])
            return false;
    }
    return true;
}

bool IsCross (int row, int col) {
    for (int i = 1; i < 5; i++) {
        if (!InRange(row + i, col + i) || board[row + i - 1][col + i - 1] != board[row + i][col + i])
            return false;
    }
    return true;
}

bool IsCrossReverse (int row, int col) {
    for (int i = 1; i < 5; i++) {
        if (!InRange(row + i, col - i) || board[row + i - 1][col - i + 1] != board[row + i][col - i])
            return false;
    }
    return true;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] != 0) {
                if (IsWidth(i, j)) {
                    win_row = i + 1;
                    win_col = j + 3;
                    is_win = board[i][j];
                    break;
                }
                if (IsHeight(i, j)) {
                    win_row = i + 3;
                    win_col = j + 1;
                    is_win = board[i][j];
                    break;
                }
                if (IsCross(i, j)) {
                    win_row = i + 3;
                    win_col = j + 3;
                    is_win = board[i][j];
                    break;
                }
                if (IsCrossReverse(i, j)) {
                    win_row = i + 3;
                    win_col = j - 1;
                    is_win = board[i][j];
                    break;
                }
            }
        }
        if (is_win != 0)
            break;
    }

    cout << is_win << endl;
    if (is_win != 0)
        cout << win_row << " " << win_col << endl;

    return 0;
}