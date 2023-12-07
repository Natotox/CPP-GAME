#include<iostream>
using namespace std;

struct Time{
    int hour, minute;
};

struct Class{
    Time duration;
};

Time update_time(Time current_time, Time add_time){
    Time updTime;
    updTime.hour = current_time.hour + add_time.hour;
    updTime.minute = current_time.minute +  add_time.minute;

    return updTime;
};

Time wake_up(){
    Time wuTime;
    wuTime.hour = 6;
    wuTime.minute = 0;
    
    return wuTime;
};

int main(){
    Class math, english;
    math.duration.hour = 1;
    math.duration.minute = 0;
    english.duration.hour = 1;
    english.duration.minute = 0;

    Time cTime;
    cTime.hour = 9;
    cTime.minute = 30;
    cout << "Time before wake up function is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = wake_up();
    cout << "Time after wake up function is: " << cTime.hour << ":" << cTime.minute << endl;

    cout << "Time before Math class is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = update_time(cTime, math.duration);
    cout << "Time after Math class is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = update_time(cTime, english.duration);
    cout << "Time after English class is: " << cTime.hour << ":" << cTime.minute << endl;
    return 0;
}