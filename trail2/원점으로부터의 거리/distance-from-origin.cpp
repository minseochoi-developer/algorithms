#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

class Grid {
    public:
        int x, y, num;
    
    Grid(int x, int y, int num) {
        this->x = x;
        this->y = y;
        this->num = num;
    }

    Grid() {}
};

bool Cmp(Grid a, Grid b) {
    if (abs(a.x) + abs(a.y) == abs(b.x) + abs(b.y))
        return a.num < b.num;

    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

Grid grids[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        grids[i] = Grid(x, y, i + 1);
    }

    sort(grids, grids + n, Cmp);

    for (int i = 0; i < n; i++) {
        cout << grids[i].num << endl;
    }
    
    return 0;
}