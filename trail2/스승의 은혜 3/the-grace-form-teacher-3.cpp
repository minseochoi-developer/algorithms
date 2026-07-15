#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];
int S[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    // Please write your code here.
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int tmp_p[N];
        for (int j = 0; j < N; j++)
            tmp_p[j] = P[j];
        tmp_p[i] /= 2;

        int tmp[N] = {0,};
        for (int j = 0; j < N; j++) {
            tmp[j] = tmp_p[j] + S[j];
        }

        sort(tmp, tmp+N);

        int money = B, cnt = 0;
        while (money > 0 && cnt <= N) {
            money -= tmp[cnt];
            if (money >= 0)
                cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}