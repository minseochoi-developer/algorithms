#include <iostream>
#include <algorithm>

#define MAX_NUM 100

using namespace std;

int N;
int pos[MAX_NUM];
char alpha[MAX_NUM];
char arr[MAX_NUM + 1];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];

        arr[pos[i]] = alpha[i];
    }

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i <= MAX_NUM; i++) {
        for (int j = i; j <= MAX_NUM; j++) {
            if (arr[i] == 0 || arr[j] == 0) continue;

            int cnt_g = 0;
            int cnt_h = 0;
            for (int k = i; k <= j; k++) {
                if (arr[k] == 'G') cnt_g++;
                else if (arr[k] == 'H') cnt_h++;
            }

            if (cnt_g != 0 && cnt_g == cnt_h)
                ans = max(ans, j - i);
            else if (cnt_g == 0 && cnt_h != 0 || cnt_g != 0 && cnt_h == 0)
                ans = max(ans, j - i);
        }
    }

    cout << ans << endl;
    return 0;
}