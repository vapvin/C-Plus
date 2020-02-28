#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
    friend class Date;

private:
    int hour, min, sec;
public:
    void setCurrentTime(int i, int i1, int i2) {
        time_t currentTime = time(NULL);
        struct tm *p = localtime(&currentTime);
        hour = p->tm_hour;
        min = p->tm_min;
        sec = p->tm_sec;
    }
};

class Date {
private:
    int year, month, day;
public:
    Date(int year, int month, int day): year(year), month(month), day(day) { }
    void show(const Time &t){
        cout << "지정된 날짜: " << year << "년" << month << "월" << day << "일" << '\n';
        cout << "현재 시간: " << t.hour << ':' << t.min << ':' << t.sec << '\n';
    }
};

int main(void){
    Time time;
    Date date = Date(2020, 02, 28);
    date.show(time);
}