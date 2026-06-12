#include <iostream>

#define OFFSET 100

using namespace std;

int arr[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        x2 += OFFSET;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                arr[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int x = 0; x <= OFFSET * 2; x++) {
        for (int y = 0; y <= OFFSET * 2; y++) {
            if (arr[x][y] == 1)
                area++;
        }
    }

    cout << area << endl;

    return 0;
}