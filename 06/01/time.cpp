#include <string>
#include <iostream>
#include "time.hpp"

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int n_hour, int n_minute, int n_second){
    hour = n_hour;
    minute = n_minute;
    second = n_second;
}

std::string Time::getTime(){
    std::string a;
    a = hour + ':' + minute + ':' + second;
    
    return a;
}

void Time::setTime(Time n_time){
    hour = n_time.hour;
    minute = n_time.minute;
    second = n_time.second;
}

void Time::dispTime(){
    std::cout << hour << ':' << minute << ':' << second;
}

void Time::addTime(Time n_time){
    second += n_time.second;
    if(second >= 60){
        second = second % 60;
        minute++;
    }

    minute += n_time.minute;
    if(minute >= 60){
        minute = minute % 60;
        hour++;
    }

    hour += n_time.hour;
}

void Time::addTime(int n_hour, int n_minute, int n_second){
    second += n_second;
    if(second >= 60){
        second = second % 60;
        minute++;
    }

    minute += n_minute;
    if(minute >= 60){
        minute = minute % 60;
        hour++;
    }

    hour += n_hour;
}