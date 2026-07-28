#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];
int arr[MAX_N + 1];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];
    
    for (int i = 0; i < n; i++)
        for (int j = x1[i]; j <= x2[i]; j++)
            arr[j]++;
    
    for (int i = 1; i <= MAX_N; i++) {
        if (arr[i] == n) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}