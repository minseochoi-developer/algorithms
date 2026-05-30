#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int matrix[4][4] = {{1, 0, 0, 0},
                        {1, 1, 0, 0},
                        {1, 1, 1, 0},
                        {1, 1, 1, 1}};
    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    int total = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == 0) break;

            total += arr[i][j];
        }
    }

    cout << total << endl;
    
    return 0;
}