#include <iostream>
#include <string>

using namespace std;

class User {
    public:
        string id;
        int level;

    User(string id = "codetree", int level = 10) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    // Please write your code here.
    User user1 = User();
    
    string id2;
    int level2;
    cin >> id2 >> level2;

    User user2 = User();
    user2.id = id2;
    user2.level = level2;

    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level << endl;

    return 0;
}