#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    bool is_overlapping = false;
    for (int i = 0; i < n; i++) {
        int max_x1 = 0;
        int min_x2 = 100;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;

            max_x1 = max(max_x1, x1[j]);
            min_x2 = min(min_x2, x2[j]);
        }
        if (min_x2 >= max_x1) {
            is_overlapping = true;
            break;
        }
    }

    if (is_overlapping)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}