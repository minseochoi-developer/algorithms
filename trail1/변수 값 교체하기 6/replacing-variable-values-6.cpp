#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 2, b = 5;
    int temp = a;

    a = b;
    b = temp;

    cout << a << "\n" << b << endl;
    
    return 0;
}