#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

class Address {
    public : 
        string name;
        string number;
        string city;
    
    Address(string name, string number, string city) {
        this->name = name;
        this->number = number;
        this->city = city;
    }

    Address() {};
};

Address address[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, number, city;
        cin >> name >> number >> city;

        address[i] = Address(name, number, city);
    } 

    int last_idx = 0;
    for (int i = 1; i < n; i++) {
        if (address[i].name > address[last_idx].name)
            last_idx = i;
    }

    cout << "name " << address[last_idx].name << endl;
    cout << "addr " << address[last_idx].number << endl;
    cout << "city " << address[last_idx].city << endl;

    return 0;
}