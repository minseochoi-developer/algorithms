#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_NUM 1000000

using namespace std;

int n, k;
int bomb[MAX_N];
bool visited[MAX_NUM + 1];

int main() {
    // Please write your code here.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> bomb[i];
    }

    int max_cnt = 0, max_num = 0;
    for (int i = 0; i < n; i++) {
        if (visited[bomb[i]])
            continue;
        
        visited[bomb[i]] = true;
        int prev_idx = i;
        int cnt = 0;
        for (int j = i + 1; j < n; j++) {
            if (bomb[j] == bomb[prev_idx]) {
                if (j - prev_idx <= k) {
                    if (prev_idx == j)
                        cnt += 2;
                    else
                        cnt += 1;
                }
                prev_idx = j;
            }
        }
        
        if (cnt == 0)
            continue;
        
        if (cnt > max_cnt) {
            max_cnt = cnt;
            max_num = bomb[i];
        }
        else if (cnt == max_cnt) {
            max_num = max(max_num, bomb[i]);
        }
    }

    cout << max_num << endl;

    return 0;
}