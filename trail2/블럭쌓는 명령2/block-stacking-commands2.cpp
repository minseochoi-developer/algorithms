#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // Please write your code here.
    int k;
    cin >> n >> k;

    int max_num = 0;
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        
        for (int i = a; i <= b; i++) {
            arr[i]++;
            max_num = max(max_num, arr[i]);
        }
    }

    cout << max_num << endl;

    return 0;
}