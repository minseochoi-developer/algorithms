#include <iostream>

#define MAX_R 200
#define OFFSET 100

using namespace std;

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        
        x1 += OFFSET;
        y1 += OFFSET;
        x2 = x1 + 8;
        y2 = y1 + 8;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                checked[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int x = 0; x <= MAX_R; x++) {
        for (int y = 0; y <= MAX_R; y++) {
            area += checked[x][y];
        }
    }

    cout << area << endl;
    
    return 0;
}