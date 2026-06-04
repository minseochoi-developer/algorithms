#include <iostream>

using namespace std;

int N;

void PrintOrder(int t) {
    if (t < 1)
        return;

    cout << t << " ";
    PrintOrder(t - 1);
    cout << t << " ";
}

int main() {
    cin >> N;

    // Please write your code here.
    int t = N;

    PrintOrder(t);

    return 0;
}