#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    // Please write your code here.
    cin >> n >> str;
    
    // 1글자 ~ n/2 글자까지 조합 만들기
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        bool is_sequence = false;
        for (int j = 0; j < n - i + 1; j++) {
            string sub_str = str.substr(j, i);
            int cnt = 0;
            for (int k = 0; k < n - i + 1; k++) {
                string sub_str2 = str.substr(k, i);
                if (sub_str == sub_str2)
                    cnt++;
            }
            if (cnt >= 2)
                ans = i;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}