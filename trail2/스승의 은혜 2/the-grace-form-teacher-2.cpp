#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    sort(P, P + N);
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        int price = B;
        for (int j = 0; j < N; j++) {
            if (i == j)
                price = price - (P[j] / 2);
            else
                price = price - P[j];

            if (price >= 0) cnt++;
            else break;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}