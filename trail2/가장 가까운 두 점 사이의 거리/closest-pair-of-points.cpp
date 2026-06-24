#include <iostream>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min = 2000000;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff_x = abs(x[i] - x[j]);
            int diff_y = abs(y[i] - y[j]);
            int num = diff_x * diff_x + diff_y * diff_y;
            if (min > num)
                min = num;
        }
    }

    cout << min << endl;

    return 0;
}