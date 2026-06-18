#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min_leng = INT_MAX;

    for (int i = 0; i < n; i++) {
        int length = 0;
        for (int j = 0; j < n; j++) {
            length += abs(j - i) * A[j];
        }
        min_leng = min(min_leng, length);
    }

    cout << min_leng << endl;

    return 0;
}