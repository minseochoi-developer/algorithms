#include <iostream>

#define MAX_N 20

using namespace std;

int n;
int x[MAX_N], y[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    bool is_possible = false;
    // 세로선 3개
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && x[l] != j && x[l] != k) {
                        is_cross = false;
                        break;
                    }
                }
                if (is_cross)
                    is_possible = true;
            }
        }
    }

    // 가로선 3개
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (y[l] != i && y[l] != j && y[l] != k) {
                        is_cross = false;
                        break;
                    }
                }
                if (is_cross)
                    is_possible = true;
            }
        }
    }

    // 세로선 2개 + 가로선 1개
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && x[l] != j && y[l] != k) {
                        is_cross = false;
                        break;
                    }
                }
                if (is_cross)
                    is_possible = true;
            }
        }
    }

    // 세로선 1개 + 가로선 2개
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && y[l] != j && y[l] != k) {
                        is_cross = false;
                        break;
                    }
                }
                if (is_cross)
                    is_possible = true;
            }
        }
    }

    cout << is_possible << endl;

    return 0;
}