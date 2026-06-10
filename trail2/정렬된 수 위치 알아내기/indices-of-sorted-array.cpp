#include <iostream>
#include <algorithm>
#include <tuple>

#define MAX_N 1000

using namespace std;

bool Cmp(tuple<int, int, int> a, tuple<int, int, int> b) {
    if (get<0>(a) == get<0>(b))
        return get<1>(a) < get<1>(b);
    return get<0>(a) < get<0>(b);
}

tuple<int, int, int> seq[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq[i] = make_tuple(num, i + 1, 0);
    }

    sort(seq, seq + n, Cmp);

    for (int i = 0; i < n; i++) {
        int ori_idx = get<1>(seq[i]) - 1;
        int target_num, target_ori;
        tie(target_num, target_ori, ignore) = seq[ori_idx];
        seq[ori_idx] = make_tuple(target_num, target_ori, i + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << get<2>(seq[i]) << " ";
    }
    return 0;
}