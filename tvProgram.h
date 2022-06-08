#pragma once
#include <iostream>
#include <string>
#include "Time_.h"
using namespace std;

class tvProgram
{
protected:
	string name;
	Time_ time;
public:
	tvProgram(string name, Time_ time);
	~tvProgram();

	void setName(string name);
	void setTime(Time_ time);

	string getName() const&;
	Time_ getTime() const&;


	virtual string toString() const& = 0;
	virtual string type() const& = 0;
};
