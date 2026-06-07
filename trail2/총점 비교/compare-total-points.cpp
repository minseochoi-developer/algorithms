#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Exam {
    public:
        string name;
        int kor, eng, math;

    Exam(string name, int kor, int eng, int math) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }

    Exam() {}
};

bool cmp(const Exam &a, const Exam &b) {
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

Exam exam[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        exam[i] = Exam(name, kor, eng, math);
    }

    sort(exam, exam+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << exam[i].name << " ";
        cout << exam[i].kor << " ";
        cout << exam[i].eng << " ";
        cout << exam[i].math << endl;
    }
    
    return 0;
}