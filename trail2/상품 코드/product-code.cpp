#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string name;
        int code;
    
    Product(string name = "codetree", int code = 50) {
        this->name = name;
        this->code = code;
    }
};

int main() {
    // Please write your code here.
    Product product1 = Product();
    
    string name;
    int code;
    cin >> name >> code;
    
    Product product2 = Product(name, code);

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;
    return 0;
}