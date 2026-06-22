#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt = n;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            double avg = sum / (j - i + 1);
            for (int k = i; k <= j; k++) {
                if (arr[k] == avg) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}