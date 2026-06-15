#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int seq = 0, max_seq = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) 
            seq = 1;
        else
            seq++;

        max_seq = max(max_seq, seq);
    }

    cout << max_seq << endl;
    return 0;
}