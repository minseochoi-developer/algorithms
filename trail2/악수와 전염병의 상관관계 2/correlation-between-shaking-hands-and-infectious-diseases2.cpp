#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_T 250

using namespace std;

int N, K, P, T;
int shake_num[MAX_N + 1];
bool infected[MAX_N + 1];

class Shake {
    public:
        int time;
        int person1;
        int person2;
        
        Shake(int time, int person1, int person2) {
            this->time = time;
            this->person1 = person1;
            this->person2 = person2;
        }
        Shake(){}
};

bool Cmp(const Shake &a, const Shake &b) {
    return a.time < b.time;
}

int main() {
    cin >> N >> K >> P >> T;

    // Please write your code here.
    infected[P] = true;
    Shake shakes[MAX_T];

    for (int i = 0; i < T; i++) {
        int time, person1, person2;
        cin >> time >> person1 >> person2;
        shakes[i] = Shake(time, person1, person2);
    }

    sort(shakes, shakes + T, Cmp);

    for (int i = 0; i < T; i++) {
        int target1 = shakes[i].person1;
        int target2 = shakes[i].person2;

        if (infected[target1])
            shake_num[target1]++;
        if (infected[target2])
            shake_num[target2]++;
        
        if (shake_num[target1] <= K && infected[target1])
            infected[target2] = true;
        
        if (shake_num[target2] <= K && infected[target2])
            infected[target1] = true;
    }

    for (int i = 1; i <= N; i++) {
        if (infected[i])
            cout << 1;
        else
            cout << 0;
    }

    return 0;
}