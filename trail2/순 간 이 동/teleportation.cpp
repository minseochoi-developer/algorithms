#include <iostream>
#include <algorithm>

using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;

    // Please write your code here.
    // A -> B
    int min_dist = abs(b - a);

    // A -> x -> y -> B
    int dist = abs(x - a) + abs(y - b);
    min_dist = min(min_dist, dist);

    // A -> y -> x -> B
    dist = abs(y - a) + abs(x - b);
    min_dist = min(min_dist, dist);

    cout << min_dist << endl;

    return 0;
}