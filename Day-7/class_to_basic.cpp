// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Time{
    public:
    int hour;
    int m;

    Time(int min,int h){
        // hour = mins/60;
        // m = mins%60;
        m = min;
        hour = h;
    }

    void display(){
        cout<<"the time is "<<hour<<" hours and "<<m<<" mins"<<endl;
    }

    operator int(){ //conversion function
        return (hour*60)+m;
    }


};

int main(){

    Time t(30,5);

    // int total_time_in_mins = t; -> ()
    cout<<"total time in mins is "<< (int)t<<endl;

  return 0;
}