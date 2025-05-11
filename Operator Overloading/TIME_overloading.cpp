#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours, minutes, seconds;

    public:
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    Time operator + (Time t){
        Time temp;
        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + (temp.seconds / 60);
        temp.hours = hours + t.hours + (temp.minutes / 60);
        return temp;
    }
    Time operator - (Time t){
        Time temp;
        temp.seconds = seconds - t.seconds;
        if(temp.seconds < 0){
            temp.seconds += 60;
            minutes--;
        }
        temp.minutes = minutes - t.minutes;
        if(temp.minutes < 0){
            temp.minutes += 60;
            hours--;
        }
        temp.hours = hours - t.hours;
        return temp;
    }
    void display(){
        cout <<hours << "Hours " <<minutes << "Minutes " << seconds << "Seconds" << endl;
    }
};
int main(){
    Time t1(2, 30, 45);
    Time t2(1, 20, 30);
    Time t3 = t1 + t2;
    Time t4 = t1 - t2;
    t3.display();
    t4.display();
    return 0;
}