#pragma once
#include "tvProgram.h"
class Children :
    public tvProgram
{
protected:
    int minAge;
    int maxAge;
public:
    Children(int minAge, int maxAge, string name, Time_ time);
    ~Children();
    void setMinAge(int minAge);
    void setMaxAge(int maxAge);

    int getMinAge() const&;
    int getMaxAge() const&;
    virtual string type() const& override { return "Children"; }

    virtual string toString() const& override;
};
