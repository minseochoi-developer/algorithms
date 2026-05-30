#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string word1, word2;

    cin >> word1 >> word2;

    if (word1.length() == word2.length()) {
        cout << "same" << endl;
    } else if (word1.length() > word2.length()) {
        cout << word1 << " " << word1.length() << endl;
    } else {
        cout << word2 << " " << word2.length() << endl;
    }
    
    return 0;
}