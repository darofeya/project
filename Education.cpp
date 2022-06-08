#include "Education.h"

Education::Education(string science, string name, Time_ time) : tvProgram(name, time)
{
    this->science = science;
}

Education::~Education()
{
}

void Education::setScience(string science)
{
    this->science = science;
}

string Education::getScience() const&
{
    return science;
}

string Education::toString() const&
{
    string temp;
    temp += "Name : ";
    temp += this->name;
    temp += " ";
    temp += "Science : ";
    temp += this->science;
    temp += " ";
    temp += "Time : ";
    temp += this->time.showTime();
    return temp;
}