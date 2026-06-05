#include <iostream>
#include <string>

using namespace std;

class Secret {
    public:
        string secret_code, location;
        int time;

    Secret(string code, string loc, int time) {
        this->secret_code = code;
        this->location = loc;
        this->time = time;
    }
};

int main() {
    // Please write your code here.
    Secret secret = Secret("","",0);
    cin >> secret.secret_code >> secret.location >> secret.time;
    cout << "secret code : " << secret.secret_code << endl;
    cout << "meeting point : " << secret.location << endl;
    cout << "time : " << secret.time << endl; 
    return 0;
}