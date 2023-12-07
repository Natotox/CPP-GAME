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

Time math_class(){
    int ans;
    Time duration, updTime;
    cout << "What is 2+2?" << endl;
    cin >> ans;

    if (ans == 4){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is 4." << endl;
    }
};

void eng_class(){
    string ans;
    cout << "What do you call an animal that goes \'meow\'?" << endl;
    cin >> ans;

    if (ans == "cat"){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is cat." << endl;
    }
};

void math_homework(){
    int ans;
    cout << "What is 4-2?" << endl;
    cin >> ans;

    if (ans == 2){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is 2." << endl;
    }
};

void eng_homework(){
    string ans;
    cout << "What sound does a cat make?" << endl;
    cin >> ans;

    if (ans == "meow"){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is meow." << endl;
    }
};

Time make_bed(Time cTime){
    Time duration, updTime;
    duration.hour = 0;
    duration.minute = 10;

    updTime = update_time(cTime, duration);

    return updTime;
};

void go_through_day(){
    Time cTime;

    cTime = wake_up();
    cout << "Time after wake up function is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = make_bed();
    cout << "Time after make bed function is: " << cTime.hour << ":" << cTime.minute << endl;
    math_class();
    eng_class();
    math_homework();
}

int main(){
    Class math, english;
    math.duration.hour = 1;
    math.duration.minute = 0;
    english.duration.hour = 1;
    english.duration.minute = 0;


    

    cout << "Time before Math class is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = update_time(cTime, math.duration);
    cout << "Time after Math class is: " << cTime.hour << ":" << cTime.minute << endl;

    cTime = update_time(cTime, english.duration);
    cout << "Time after English class is: " << cTime.hour << ":" << cTime.minute << endl;
    return 0;
}