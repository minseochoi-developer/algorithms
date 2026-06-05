#include <iostream>
#include <string>

#define MAX_N 100

using namespace std;

class Data {
    public:
        string date;
        string day;
        string weather;
    
    Data(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    Data() {}
};

Data datas[MAX_N];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;

        datas[i] = Data(date, day, weather);
    }

    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (datas[i].weather != "Rain")
            continue;
        
        if (idx == -1)
            idx = i;
        else if (datas[i].date < datas[idx].date)
            idx = i;
    }

    cout << datas[idx].date << " ";
    cout << datas[idx].day << " ";
    cout << datas[idx].weather << endl;

    return 0;
}