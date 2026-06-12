#include <iostream>

#define MAX_TILE 200000
#define OFFSET 100000
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int white[MAX_TILE + 1] = {0, };
    int black[MAX_TILE + 1] = {0, };
    char color[MAX_TILE + 1] = {'N', }; 
    int cur = 0;

    for (int i = 0; i < n; i++) {
        int dist;
        char dic;
        cin >> dist >> dic;

        int x1, x2;
        if (dic == 'L') {
            x1 = cur - dist + 1;
            x2 = cur;
            cur = cur - dist + 1;
        } else {
            x1 = cur;
            x2 = cur + dist - 1;
            cur = cur + dist - 1;
        }

        x1 += OFFSET;
        x2 += OFFSET;

        for (int j = x1; j <= x2; j++) {
            if (color[j] == 'G')
                continue;
            
            if (dic == 'L') {
                white[j]++;
                color[j] = 'W';
            } else {
                black[j]++;
                color[j] = 'B';
            }

            if (white[j] >= 2 && black[j] >= 2)
                color[j] = 'G';
        }
    }

    int w = 0, b = 0, g = 0;
    for (int i = 0; i <= MAX_TILE; i++) {
        if (color[i] == 'W')
            w++;
        else if (color[i] == 'B') 
            b++;
        else if (color[i] == 'G')
            g++;
    }

    cout << w << " " << b << " " << g << endl;
    return 0;
}