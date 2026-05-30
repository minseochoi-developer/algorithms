#include <iostream>
using namespace std;

#define ARR_LENGTH 4

int main() {
    // Please write your code here.
    int arr[ARR_LENGTH][ARR_LENGTH];
    for (int i = 0; i < ARR_LENGTH; i++) {
        for (int j = 0; j < ARR_LENGTH; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < ARR_LENGTH; i++) {
        int total = 0;
        for (int j = 0; j < ARR_LENGTH; j++) {
            total += arr[i][j];
        }
        cout << total << "\n";
    }
    return 0;
}