#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[10];

int main() {
    // Please write your code here.
    cin >> n;

    int cnt = 0;
    fill(&arr[0], &arr[0] + 10, -1);
    for (int i = 0; i < n; i++) {
        int num, loc;
        cin >> num >> loc;
        
        if (arr[num - 1] != -1 && arr[num - 1] != loc)
            cnt++;
        
        arr[num - 1] = loc;
    }
    
    cout << cnt << endl;

    return 0;
}