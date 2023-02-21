#include<iostream>
using namespace std;
class Time{
    int hours,minutes;
    public:
    void setTime(int a,int b){
        hours = a;
        minutes = b;
        if(minutes >= 60){
            hours += minutes / 60;
            minutes %= 60;
        }
    }
    void showTime(){
        cout<<"------------------"<<endl;
        cout<<hours<<":"<<minutes<<endl;
    }
    Time sum(Time &ht){
        Time t;
        t.hours = this->hours+ht.hours;
        t.minutes = this->minutes+ht.minutes;
        if(t.minutes >= 60){
            t.hours += t.minutes / 60;
            t.minutes %= 60;
        }
        return t;
    }
};
int main(){
    Time yd,td,tm;
    yd.setTime(3, 54);
    td.setTime(2, 70);
    tm = td.sum(yd);
    yd.showTime();
    td.showTime();
    tm.showTime();
    return 0;
}