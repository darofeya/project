#pragma once
#include "tvProgram.h"
class Show :
    public tvProgram
{
protected:
    string treme;
public:
    Show(string treme, string name, Time_ time);
    ~Show();

    void setTreme(string treme);

    string getTreme() const&;

    virtual string toString() const& override;
    virtual string type() const& override { return "Show"; }
};