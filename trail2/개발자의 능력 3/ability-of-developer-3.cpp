#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int developer[6];

int GetDiff(int i, int j, int k) {
    int sum1 = developer[i] + developer[j] + developer[k];
    int sum2 = 0;
    for (int l = 0; l < 6; l++) {
        sum2 += developer[l];
    }
    sum2 = sum2 - sum1;
    return abs(sum1 - sum2);
}

int main() {
    // Please write your code here.
    for (int i = 0; i < 6; i++)
        cin >> developer[i];

    int min_diff = INT_MAX;
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {
                min_diff = min(min_diff, GetDiff(i, j, k));
            }
        }
    }

    cout << min_diff;
    return 0;
}