#pragma once
#include "tvProgram.h"
class Education :
    public tvProgram
{
protected:
    string science;
public:
    Education(string science, string name, Time_ time);
    ~Education();

    void setScience(string science);

    string getScience() const&;

    virtual string toString() const& override;
    virtual string type() const& override { return "Education"; }
};
