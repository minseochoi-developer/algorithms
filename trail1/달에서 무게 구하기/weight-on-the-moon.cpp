#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int weight = 13;
    double per = 0.165;

    cout << fixed;
    cout.precision(6);

    cout << weight << " * " << per << " = " << weight * per << endl;
    return 0;
}