#include <iostream>
#include <algorithm>

#define MAX_N 1000
using namespace std;

int n;
int arr[MAX_N - 1];
int original[MAX_N];
int visited[MAX_N + 1];

void ResetVisited() {
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }
}

bool InRange(int num) {
    return num >= 1 && num <= n;
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    bool is_answer = false;
    int start_num = 0;
    while (!is_answer && start_num <= n) {
        start_num++;
        visited[start_num] = 1;
        original[0] = start_num;

        for (int j = 0; j < n - 1; j++) {
            int num = arr[j] - original[j];
            if (InRange(num) && visited[num] != 1) {
                visited[num] = 1;
                original[j + 1] = num;
                is_answer = true;
            }
            else {
                ResetVisited();
                is_answer = false;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << original[i] << " ";
    }

    return 0;
}