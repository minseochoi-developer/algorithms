#include <iostream>

#define MAX_M 100
#define MAX_N 26

using namespace std;

int n, m, p;
char c[MAX_M + 1];
int u[MAX_M + 1];
bool people[MAX_N];

int main() {
    // Please write your code here.
    cin >> n >> m >> p;
    for (int i = 1; i <= m; i++)
        cin >> c[i] >> u[i];

    int unread = u[p];

    if (unread == 0)
        return 0;
    

    for (int i = 1; i <= m; i++) {
        if (u[i] >= unread)
            people[c[i] - 65] = true;
    }

    for (int i = 0; i < n; i++) {
        if (!people[i])
            cout << (char)(i + 65) << " ";
    }

    return 0;
}