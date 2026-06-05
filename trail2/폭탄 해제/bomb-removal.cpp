#include <iostream>
#include <string>
using namespace std;

class Bomb {
    public:
        string code;
        char color;
        int sec;

    Bomb(string code, char color, int sec) {
        this->code = code;
        this->color = color;
        this->sec = sec;
    }
};

int main() {
    // Please write your code here.
    string code;
    char color;
    int sec;

    cin >> code >> color >> sec;

    Bomb bomb = Bomb(code, color, sec);

    cout << "code : " << bomb.code << endl;
    cout << "color : " << bomb.color << endl;
    cout << "second : " << bomb.sec << endl;

    return 0;
}