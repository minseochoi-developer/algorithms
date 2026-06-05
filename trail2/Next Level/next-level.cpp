#include <iostream>
#include <string>

using namespace std;

class DefaultInfo {
    public:
        string id;
        int level;

    DefaultInfo(string id = "codetree", int level = 10) {
        this->id = id;
        this->level = level;
    }
};

class Info {
    public:
        string id;
        int level;

    Info(string id, int level) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    // Please write your code here.
    DefaultInfo defaultInfo = DefaultInfo();
    
    string id;
    int level;
    cin >> id >> level;
    Info info = Info(id, level);

    cout << "user " << defaultInfo.id << " lv " << defaultInfo.level << endl;
    cout << "user " << info.id << " lv " << info.level << endl;

    return 0;
}