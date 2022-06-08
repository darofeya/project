#include "Movie.h"
Movie::Movie(string directBox, int year, string name, Time_ time)
    :tvProgram(name, time)
{
    this->directBox = directBox;
    this->year = year;
}

Movie::~Movie()
{
}

void Movie::setdirectBox(string directBox)
{
    this->directBox = directBox;
}

void Movie::setYear(int year)
{
    this->year = year;
}

string Movie::getdirectBox() const&
{
    return directBox;
}

int Movie::getYear() const&
{
    return year;
}

string Movie::toString() const&
{
    string temp;
    temp += "Name : ";
    temp += this->name;
    temp += " ";
    temp += "Year : ";
    temp += to_string(this->year);
    temp += " ";
    temp += "Direct box : ";
    temp += this->directBox;
    temp += " ";
    temp += "Time : ";
    temp += this->time.showTime();
    return temp;
}