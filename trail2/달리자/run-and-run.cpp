#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N], b[MAX_N];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    int dist = 0;
    int move_person = 0;
    for (int i = 0; i < n - 1; i++) {
        dist += move_person;
        if (b[i] < a[i])
            move_person = move_person + (a[i] - b[i]);
        else if (b[i] > a[i])
            move_person = move_person - (b[i] - a[i]);
    }

    dist += move_person;
    cout << dist << endl;

    return 0;
}