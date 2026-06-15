#include <iostream>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n;
int arr[MAX_N][MAX_N];
int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int step = 0; step < DIR_NUM; step++) {
                int nx = i + dx[step];
                int ny = j + dy[step];
                if (InRange(nx, ny) && arr[nx][ny] == 1)
                    cnt++;
            }
            if (cnt >= 3)
                ans++;
        }
    }

    cout << ans;
    return 0;
}