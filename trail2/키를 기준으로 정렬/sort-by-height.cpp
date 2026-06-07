#include <iostream>
#include <algorithm>
#include <string>

#define MAX_N 10

using namespace std;

int n;

class Person {
    public:
        string name;
        int length;
        int weight;
    
    Person(string name, int length, int weight) {
        this->name = name;
        this->length = length;
        this->weight = weight;
    }

    Person() {}
};

bool cmp(const Person &person1, const Person &person2) {
    return person1.length < person2.length;
}

Person person[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int length, weight;
        cin >> name >> length >> weight;
        person[i] = Person(name, length, weight);
    }

    sort(person, person+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].name << " ";
        cout << person[i].length << " ";
        cout << person[i].weight << endl;
    }

    return 0;
}