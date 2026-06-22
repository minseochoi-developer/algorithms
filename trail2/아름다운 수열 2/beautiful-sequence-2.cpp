#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int A[100], B[100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    // Please write your code here.
    int cnt = 0;
    for (int i = 0; i <= N - M; i++) {
        int temp[M];
        for (int j = 0; j < M; j++) {
            temp[j] = A[i + j];
        }

        sort(temp, temp + M);
        sort(B, B + M);

        bool is_same = true;
        for (int k = 0; k < M; k++) {
            if (temp[k] != B[k]) {
                is_same = false;
                break;
            }
        }

        if (is_same) cnt++;
    }

    cout << cnt << endl;

    return 0;
}