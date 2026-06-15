#include <iostream>
#include <algorithm>

#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // Please write your code here.
    for (int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                checked[x][y] = i + 1;
            }
        }   
    }

    int area = 0;
    int min_x = MAX_R, max_x = 0, min_y = MAX_R, max_y = 0;
    for (int x = 0; x <= MAX_R; x++) {
        for (int y = 0; y <= MAX_R; y++) {
            if (checked[x][y] == 1) {
                area++;
                min_x = min(min_x, x);
                min_y = min(min_y, y);
                max_x = max(max_x, x);
                max_y = max(max_y, y);
            }
        }
    }

    if (area == 0)
        cout << 0 << endl;
    else
        cout << (max_x - min_x + 1) * (max_y - min_y + 1) << endl;
    
    return 0;
}