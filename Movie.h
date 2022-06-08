#pragma once
#include "tvProgram.h"
class Movie :
    public tvProgram
{
protected:
    string directBox;
    int year;
public:
    Movie(string directBox, int year, string name, Time_ time);
    ~Movie();

    void setdirectBox(string directBox);
    void setYear(int year);

    string getdirectBox() const&;
    int getYear() const&;
    virtual string type() const& override { return "Movie"; }
    virtual string toString() const& override;
};


