#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;
};

const int MAX_SECOND = 60;
const int MAX_MINUTE = 60;
const int MAX_HOUR = 24;

Time addSecond(Time time) {
    Time new_time;
    new_time.hour = time.hour;
    new_time.minute = time.minute;
    new_time.second = time.second;

    new_time.second = new_time.second + 1;
    if (new_time.second == MAX_SECOND) {
        new_time.second = 0;
        new_time.minute = new_time.minute + 1;
        if (new_time.minute = MAX_MINUTE) {
            new_time.minute = 0;
            new_time.hour = new_time.hour + 1;
            if (new_time.hour == MAX_HOUR) {
                new_time.hour = 0;
            }
        }
    }
    return new_time;
}

int main () {
    Time time;
    cout << "informe o horário:";
    cin >> time.hour >> time.minute >> time.second;

    Time new_time;
    new_time = addSecond(time);

    cout << "novo horário: " << new_time.hour << ":" << new_time.minute << ":" << new_time.second << endl;
    
    return 0;
}