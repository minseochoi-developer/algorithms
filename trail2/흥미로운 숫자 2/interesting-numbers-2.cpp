#include <iostream>
using namespace std;

int cnt[10] = {0, };

void ResetCnt() {
    for (int i = 0; i < 10; i++) {
        cnt[i] = 0;
    }
}

bool IsInterestingNumber() {
    int not_zero = 0;
    int cnt_one = 0;

    for (int i = 0; i < 10; i++) {
        if (cnt[i] > 0)
            not_zero++;
        
        if (cnt[i] == 1)
            cnt_one++;
        
        if (not_zero > 2)
            return false;
    }
    return cnt_one == 1 ? true : false;
}

void CountNumber (int num) {
    while (num > 0) {
        cnt[num % 10]++;
        num /= 10;
    }
}

int main() {
    // Please write your code here.
    int x, y;
    cin >> x >> y;

    int ans = 0;
    for (int i = x; i <= y; i++) {
        CountNumber(i);

        if (IsInterestingNumber())
            ans++;
        
        ResetCnt();
    }

    cout << ans << endl;

    return 0;
}