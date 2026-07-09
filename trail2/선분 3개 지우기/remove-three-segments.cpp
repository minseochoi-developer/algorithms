#include <iostream>

#define MAX_N 10

using namespace std;

int n;
int a[MAX_N], b[MAX_N];
int arr[101];

bool IsOverlap() {
    for (int i = 0; i <= 100; i++) {
        if (arr[i] > 1) 
            return true;
    }

    return false;
}

void ResetArr() {
    for (int i = 0; i <= 100; i++) {
        arr[i] = 0;
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                ResetArr();
                for (int l = 0; l < n; l++) {
                    if (l == i || l == j || l == k) continue;
                    for (int m = a[l]; m <= b[l]; m++) {
                        arr[m]++;
                    }
                }

                if(!IsOverlap())
                    ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}