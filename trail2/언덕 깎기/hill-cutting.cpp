#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N;
int heights[1000];

int GetCost(int h, int max_h) {
    int cost = 0;
    for (int i = 0; i < N; i++) {
        if (heights[i] < h)
            cost += (h - heights[i]) * (h - heights[i]);
        else if (heights[i] > max_h)
            cost += (max_h - heights[i]) * (max_h - heights[i]);
    }
    return cost;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    // Please write your code here.
    sort(heights, heights+N);

    int min_cost = INT_MAX;
    for (int i = 0; i <= 83; i++) {
        min_cost = min(min_cost, GetCost(i, i + 17));
    }

    cout << min_cost << endl;

    return 0;
}