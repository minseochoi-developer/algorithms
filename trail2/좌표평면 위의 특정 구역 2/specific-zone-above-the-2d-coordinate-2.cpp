#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int area = INT_MAX;
    for (int i = 0; i < N; i++) {
        int min_x = 40000, max_x = 0, min_y = 40000, max_y = 0;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;

            min_x = min(min_x, x[j]);
            min_y = min(min_y, y[j]);
            max_x = max(max_x, x[j]);
            max_y = max(max_y, y[j]);
        }
        
        int rec = (max_x - min_x) * (max_y - min_y);
        area = min(area, rec);
    }

    cout << area << endl;
    return 0;
}