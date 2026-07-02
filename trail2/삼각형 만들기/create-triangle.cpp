#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int N;
int x[100];
int y[100];

long long GetWidth(int i, int j, int k) {
    bool has_parallel_x = (x[i] == x[j] || x[j] == x[k] || x[k] == x[i]);
    bool has_parallel_y = (y[i] == y[j] || y[j] == y[k] || y[k] == y[i]);
    
    if (has_parallel_x && has_parallel_y) {
        long long base = max({x[i], x[j], x[k]}) - min({x[i], x[j], x[k]});
        long long height = max({y[i], y[j], y[k]}) - min({y[i], y[j], y[k]});

        return base * height;
    }

    return 0;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                long long width = GetWidth(i, j, k);
                ans = max(ans, width);
            }
        }
    }

    cout << ans << endl;

    return 0;
}