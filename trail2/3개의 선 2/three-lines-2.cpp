#include <iostream>

#define MAX_N 20

using namespace std;

int n;
int x[MAX_N], y[MAX_N];

bool IsparallelXOneYTwo() {
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && y[l] != j && y[l] != k) {
                        is_cross = false;
                    }
                }
                if (is_cross)
                    return true;
            }
        }
    }
    return false;
}

bool IsparallelXTwoYOne() {
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && x[l] != j && y[l] != k) {
                        is_cross = false;
                    }
                }
                if (is_cross)
                    return true;
            }
        }
    }
    return false;
}

bool IsparallelYThree() {
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (y[l] != i && y[l] != j && y[l] != k) {
                        is_cross = false;
                    }
                }
                if (is_cross)
                    return true;
            }
        }
    }
    return false;
}

bool IsparallelXThree() {
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                bool is_cross = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] != i && x[l] != j && x[l] != k) {
                        is_cross = false;
                    }
                }
                if (is_cross)
                    return true;
            }
        }
    }
    return false;
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    bool is_possible = false;

    if (IsparallelXThree())
        is_possible = true;
    
    if (!is_possible && IsparallelYThree())
        is_possible = true;
    
    if (!is_possible && IsparallelXTwoYOne())
        is_possible = true;
    
    if (!is_possible && IsparallelXOneYTwo())
        is_possible = true;

    cout << is_possible << endl;

    return 0;
}