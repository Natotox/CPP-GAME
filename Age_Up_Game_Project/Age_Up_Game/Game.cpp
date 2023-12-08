#include<iostream>
using namespace std;

struct Time{
    int hour, minute;
    string ampm;
};

struct Class{
    Time duration;
};

Time update_time(Time current_time, Time add_time){
    Time updTime;
    updTime.hour = current_time.hour + add_time.hour;
    updTime.minute = current_time.minute +  add_time.minute;

    if (updTime.minute > 59){
        updTime.minute = updTime.minute % 60;
        updTime.hour++;
    }

    if(updTime.hour == 12){
        updTime.ampm = "PM";
    }
    else if (updTime.hour > 12){
        if(updTime.hour == 24){
            updTime.hour = updTime.hour - 12;
            updTime.ampm = "AM";
        }
        else{
            updTime.hour = updTime.hour - 12;
            updTime.ampm = "PM";
        }
        
    }
    else{
        updTime.ampm = "AM";
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << "Time is: " << updTime.hour << ":" << updTime.minute << " " << updTime.ampm << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;

    return updTime;
};

Time wake_up(){
    Time wuTime;
    wuTime.hour = 6;
    wuTime.minute = 0;
    
    return wuTime;
};

Time math_class(Time cTime){
    int ans;
    Time duration, updTime;
    duration.hour = 1;
    duration.minute = 0;

    cout << "What is 2+2?" << endl;
    cin >> ans;

    if (ans == 4){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is 4." << endl;
    }

    updTime = update_time(cTime, duration);

    return updTime;
};

Time eng_class(Time cTime){
    string ans;
    Time duration, updTime;
    duration.hour = 1;
    duration.minute = 0;

    cout << "What do you call an animal that goes \'meow\'?" << endl;
    cin >> ans;

    if (ans == "cat"){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is cat." << endl;
    }

    updTime = update_time(cTime, duration);

    return updTime;
};

Time go_home(){
    Time ghTime;
    ghTime.hour = 12;
    ghTime.minute = 45;

    cout << "Went home" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << "Time is: " << ghTime.hour << ":" << ghTime.minute << " " << ghTime.ampm << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    
    return ghTime;
}

Time math_homework(Time cTime){
    int ans;
    Time duration, updTime;
    duration.hour = 0;
    duration.minute = 30;

    cout << "What is 4-2?" << endl;
    cin >> ans;

    if (ans == 2){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is 2." << endl;
    }

    updTime = update_time(cTime, duration);

    return updTime;
};

Time eng_homework(Time cTime){
    string ans;

    Time duration, updTime;
    duration.hour = 0;
    duration.minute = 30;

    cout << "What sound does a cat make?" << endl;
    cin >> ans;

    if (ans == "meow"){
        cout << "You are correct!" << endl;
    }
    else{
        cout << "The answer you gave was wrong. The correct answer is meow." << endl;
    }

    updTime = update_time(cTime, duration);

    return updTime;
};

Time make_bed(Time cTime){
    char toggle;
    Time duration, updTime;
    duration.hour = 0;
    duration.minute = 10;

    cout << "Enter \'t\' to make bed" << endl;
    cin >> toggle;

    if (toggle == 't'){
        cout << "Bed is made!" << endl;
    }

    updTime = update_time(cTime, duration);

    return updTime;
};

void go_through_day(){
    Time cTime;

    cTime = wake_up();

    cTime = make_bed(cTime);

    cTime = math_class(cTime);

    cTime = eng_class(cTime);

    cTime = go_home();

    cTime = math_homework(cTime);

    cTime = eng_homework(cTime);
}

int main(){
    go_through_day();

    return 0;
}