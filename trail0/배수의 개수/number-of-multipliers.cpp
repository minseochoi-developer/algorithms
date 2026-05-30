#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num;
    int cnt3 = 0, cnt5 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;

        if (num % 3 == 0)
            cnt3++;
        
        if (num % 5 == 0)
            cnt5++;
    }

    cout << cnt3 << " " << cnt5 << endl;

    return 0;
}