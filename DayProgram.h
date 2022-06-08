#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Time_.h"
#include "tvProgram.h"
#include "Children.h"
#include "Education.h"
#include "Movie.h"
#include "Show.h"
#include <fstream>
using namespace std;

bool mycompare(const tvProgram* lhs, const tvProgram* rhs);

class DayProgram
{
	vector<tvProgram*> programs;
	string date;
public:
	DayProgram();
	~DayProgram();
	void setDate(string date);
	string getDate() const&;
	void show();
	void add();
	void findby();
	void mysort();
	void save(ofstream& file);
	void load(ifstream& file);
};