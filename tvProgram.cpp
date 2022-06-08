#include "tvProgram.h"

tvProgram::tvProgram(string name, Time_ time)
{
	this->name = name;
	this->time = time;
}

tvProgram::~tvProgram()
{
}

void tvProgram::setName(string name)
{
	this->name = name;
}

void tvProgram::setTime(Time_ time)
{
	this->time = time;
}

string tvProgram::getName() const&
{
	return name;
}

Time_ tvProgram::getTime()const&
{
	return time;
}