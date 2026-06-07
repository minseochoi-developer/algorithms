#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;
    
    Student(string name, int kor, int eng, int math) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }

    Student() {}
};

bool cmp (const Student &student1, const Student &student2) {
    if (student1.kor == student2.kor) {
        if (student1.eng == student2.eng) {
            return student1.math > student2.math;
        } else {
            return student1.eng > student2.eng;
        }
    }
    return student1.kor > student2.kor;
}

Student students[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].kor << " ";
        cout << students[i].eng << " ";
        cout << students[i].math << endl;
    }
    return 0;
}