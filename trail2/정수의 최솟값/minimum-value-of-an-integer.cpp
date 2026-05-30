#include <iostream>
using namespace std;

int getMin(int a, int b, int c) {
    int min = a;
    
    if (min > b) min = b;
    if (min > c) min = c;

    return min; 
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    cout << getMin(a, b, c) << endl;

    return 0;
}