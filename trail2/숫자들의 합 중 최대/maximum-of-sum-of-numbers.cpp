#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int x, y;
    cin >> x >> y;

    int max_num = 0;
    for (int i = x; i <= y; i++) {
        int d1 = i / 10000;
        int d2 = (i % 10000) / 1000;
        int d3 = (i % 1000) / 100;
        int d4 = (i % 100) / 10;
        int d5 = i % 10;

        int sum = d1 + d2 + d3 + d4 + d5;
        max_num = max(max_num, sum);
    }

    cout << max_num << endl;
    
    return 0;
}