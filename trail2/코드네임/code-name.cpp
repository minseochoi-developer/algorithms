#include <iostream>

using namespace std;

class Member {
    public:
        char code_name;
        int score;

    Member(char code_name, int score) {
        this->code_name = code_name;
        this->score = score;
    }

    Member() {};
};

Member members[5];

int main() {
    // Please write your code here.
    for (int i = 0; i < 5; i++) {
        char code_name;
        int score;
        cin >> code_name >> score;
        members[i] = Member(code_name, score);
    }

    char name;
    int min_score = 101;
    for (int i = 0; i < 5; i++) {
        if (members[i].score < min_score) {
            name = members[i].code_name;
            min_score = members[i].score;
        }
    }

    cout << name << " " << min_score << endl;
    return 0;
}