#include <iostream>

#define OFFSET 1000

using namespace std;

int rec[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    int area = 0;

    for (int i = 0; i < 2; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                rec[x][y] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;

    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for (int x = x1; x < x2; x++) {
        for (int y = y1; y < y2; y++) {
            rec[x][y] = 0;
        }
    }

    for (int x = 0; x < OFFSET * 2 + 1; x++) {
        for (int y = 0; y < OFFSET * 2 + 1; y++) {
            area += rec[x][y];
        }
    }

    cout << area << endl;

    return 0;
}