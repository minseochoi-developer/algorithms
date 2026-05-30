#include <iostream>
using namespace std;

bool isLeapYear(int y) {
    if (y % 4 != 0)
        return false;
    
    if (y % 100 == 0 && y % 400 != 0)
        return false;
    
    return true;
} 

int main() {
    // Please write your code here.
    int y;
    cin >> y;

    if (isLeapYear(y)) 
        cout << "true" << endl;
    else 
        cout << "false" << endl;

    return 0;
}