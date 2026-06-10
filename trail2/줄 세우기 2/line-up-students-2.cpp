#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

class Student {
    public:
        int height, weight, num;

    Student(int height, int weight, int num) {
        this->height = height;
        this->weight = weight;
        this->num = num;
    }

    Student() {};
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
        int height, weight;
        cin >> height >> weight;
        students[i] = Student(height, weight, i+1);
    }

    sort(students, students+n, Cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].height << " ";
        cout << students[i].weight << " ";
        cout << students[i].num << endl;
    }

    return 0;
}