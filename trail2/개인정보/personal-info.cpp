#include <iostream>
#include <string>
#include <algorithm>

#define NUM 5

using namespace std;

class Info {
    public:
        string name;
        int height;
        double weight;

    Info(string name, int height, double weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    Info() {}
};

bool CmpName(Info a, Info b) {
    return a.name < b.name;
}

bool CmpHeight(Info a, Info b) {
    return a.height > b.height;
}

Info info[NUM];

int main() {
    // Please write your code here.
    for (int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        info[i] = Info(name, height, weight);
    }

    sort(info, info + 5, CmpName);

    cout << fixed;
    cout.precision(1);

    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " ";
        cout << info[i].height << " ";
        cout << info[i].weight << endl;
    }
    cout << endl;

    sort(info, info + 5, CmpHeight);
    cout << "height" << endl;
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " ";
        cout << info[i].height << " ";
        cout << info[i].weight << endl;
    }

    return 0;
}