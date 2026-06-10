#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

class Student {
    public:
        int h, w, num;
    
    Student(int h, int w, int num) {
        this->h = h;
        this->w = w;
        this->num = num;
    }

    Student() {}
};

Student students[MAX_N];

bool cmp(Student a, Student b) {
    if (a.h == b.h) {
        if (a.w == b.w) {
            return a.num < b.num;
        } else {
            return a.w > b.w;
        }
    }
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int h, w;
        cin >> h >> w;
        students[i] = Student(h, w, i + 1); 
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].h << " ";
        cout << students[i].w << " ";
        cout << students[i].num << endl;
    }
    
    return 0;
}