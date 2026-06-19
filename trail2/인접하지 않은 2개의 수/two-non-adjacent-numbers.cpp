#include <iostream>
#include <algorithm>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i - 1 || j == i + 1 || j == i)
                continue;

            max_sum = max(max_sum, numbers[i] + numbers[j]);
        }
    }

    cout << max_sum << endl;

    return 0;
}