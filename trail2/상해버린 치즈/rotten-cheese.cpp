#include <iostream>

using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];
int cheese[51];
bool ate[51][51], person[51];

int main() {
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
    }

    // Please write your code here.
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < D; j++) {
            if (sick_p[i] != p[j]) continue;

            if (sick_t[i] > t[j] && !ate[p[j]][m[j]]) {
                cheese[m[j]]++;
                ate[p[j]][m[j]] = true;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= M; i++) {
        if (cheese[i] == S) {
            for (int j = 0; j < D; j++) {
                if (i == m[j] && !person[p[j]]) {
                    person[p[j]] = true;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}