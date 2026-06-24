#include <iostream>
#include <cstdlib>
using namespace std;

int n;
int a1, b1, c1;
int a2, b2, c2;

bool CheckDistance(int a, int b, int n) {
    int diff = abs(a - b);

    if (diff <= 2 || (n - diff) <= 2)
        return true;
    
    return false;
}

int main() {
    // Please write your code here.
    cin >> n >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                bool match1 = CheckDistance(i, a1, n) && CheckDistance(j, b1, n) && CheckDistance(k, c1, n);
                bool match2 = CheckDistance(i, a2, n) && CheckDistance(j, b2, n) && CheckDistance(k, c2, n);

                if (match1 || match2)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}