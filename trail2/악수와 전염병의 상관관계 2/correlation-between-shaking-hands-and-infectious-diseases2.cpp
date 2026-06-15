#include <iostream>

#define MAX_N 100
#define MAX_T 250
using namespace std;

int N, K, P, T;
int disease[MAX_N + 1], rest[MAX_N + 1];
int x_dev[MAX_T + 1], y_dev[MAX_T + 1]; 

int main() {
    // Please write your code here.
    cin >> N >> K >> P >> T;

    disease[P] = 1;
    rest[P] = K;

    int ans = 1;
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        x_dev[t] = x;
        y_dev[t] = y;
    }

    for (int i = 1; i <= MAX_T; i++) {
        if (disease[x_dev[i]]) {
            if (disease[y_dev[i]]) {
                rest[x_dev[i]]--;
                rest[y_dev[i]]--;
            } else {
                if (rest[x_dev[i]] > 0) {
                    disease[y_dev[i]] = 1;
                    rest[y_dev[i]] = K;
                    rest[x_dev[i]]--;
                }
            }
        } else {
            if (disease[y_dev[i]]) {
                if (rest[y_dev[i]] > 0) {
                    disease[x_dev[i]] = 1;
                    rest[x_dev[i]] = K;
                    rest[y_dev[i]]--;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << disease[i + 1];
    }
    return 0;
}
