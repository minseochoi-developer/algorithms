#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Student {
    public:
        string name;
        int height, weight;
    
    Student(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    Student() {}
};

bool Cmp(Student a, Student b) {
    if (a.height == b.height) {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

Student students[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, Cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }
    
    return 0;
}