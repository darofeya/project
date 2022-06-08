#include "Show.h"

Show::Show(string treme, string name, Time_ time)
    : tvProgram(name, time)
{
    this->treme = treme;
}

Show::~Show()
{
}

void Show::setTreme(string treme)
{
    this->treme = treme;
}

string Show::getTreme() const&
{
    return treme;
}

string Show::toString() const&
{
    string temp;
    temp += "Name : ";
    temp += this->name;
    temp += " ";
    temp += "Treme : ";
    temp += this->treme;
    temp += " ";
    temp += "Time : ";
    temp += this->time.showTime();
    return temp;
}