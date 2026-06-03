#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isContinuous(int a_idx) {
    for (int b_idx = 0; b_idx < n2; b_idx++) {
        if (a[a_idx] != b[b_idx]) 
            return false;
        
        a_idx++;
    }

    return true;
}

bool isSubSequence() {
    for (int i = 0; i < n1; i++) {
        if (a[i] == b[0]) {
            if (isContinuous(i))
                return true;
        }
    }

    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if (isSubSequence())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}