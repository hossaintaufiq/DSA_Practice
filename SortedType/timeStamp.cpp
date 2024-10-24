#include "timeStamp.h"
#include<bits/stdc++.h>
using namespace std;

timeStamp::timeStamp()
{
    seconds=0;
    minutes=0;
    hours=0;
}
timeStamp::timeStamp(int seconds, int minutes, int hours)
{
    this->seconds= seconds;
    this->minutes= minutes;
    this->hours= hours;
}

void timeStamp::setSeconds(int seconds)
{
    this->seconds=seconds;
}
void timeStamp::setMinutes(int minutes)
{
    this->minutes=minutes;
}
void timeStamp::setHours(int hours)
{
    this->hours=hours;
}

int timeStamp::getHours()
{
    return hours;
}
int timeStamp::getMinutes()
{
    return minutes;
}
int timeStamp::getSeconds()
{
    return seconds;
}

void timeStamp::print()
{
    cout<<getSeconds() <<":"<<getMinutes()<<":"<<getHours()<<endl;
}
bool operator > (timeStamp &obj1, timeStamp& obj2)
{
    if(obj1.getHours()>obj2.getHours())
    {
        return true;
    }
    else return false ;

}
bool operator !=(timeStamp &obj1, timeStamp& obj2)
{
    if(obj1.getHours()!=obj2.getHours())
    {
        return true;
    }
    else return false ;

}
