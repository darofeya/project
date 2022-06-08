#include "DayProgram.h"
DayProgram::DayProgram()
{
}

DayProgram::~DayProgram()
{
}

void DayProgram::setDate(string date)
{
	this->date = date;
}

string DayProgram::getDate() const&
{
	return date;
}

void DayProgram::show()
{
	vector<tvProgram*>::iterator it;
	for (it = programs.begin(); it != programs.end(); it++)
	{
		cout << (*it)->toString();
		cout << endl;
	}
}

void DayProgram::add()
{
	int menu = -1;
	cout << "Education - 1; Movie - 2; Show - 3; Children - 4;" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1:
	{
		string t1, t2;
		int h, m;
		cout << "Write science" << endl;
		cin >> ws;
		getline(cin, t1);
		cout << "Write name" << endl;
		cin >> ws;
		getline(cin, t2);
		cout << "Write hours" << endl;
		cin >> h;
		cout << "Write minutes" << endl;
		cin >> m;
		try
		{
			vector<tvProgram*>::iterator it;
			for (it = programs.begin(); it != programs.end(); it++)
			{
				if ((*it)->getTime() == Time_(h, m, 0))
					throw;
			}
		}
		catch (string temp)
		{
			temp = "The show is already booked for this time";
			cout << temp << endl;
		}
		programs.push_back(new Education(t1, t2, Time_(h, m, 0)));
		break;
	}
	case 2:
	{
		string t1, t2;
		int h, m, y;
		cout << "Write direct box" << endl;
		cin >> ws;
		getline(cin, t1);
		cout << "Write name" << endl;
		cin >> ws;
		getline(cin, t2);
		cout << "Write hours" << endl;
		cin >> h;
		cout << "Write minutes" << endl;
		cin >> m;
		cout << "Write year" << endl;
		cin >> y;
		try
		{
			vector<tvProgram*>::iterator it;
			for (it = programs.begin(); it != programs.end(); it++)
			{
				if ((*it)->getTime() == Time_(h, m, 0))
					throw;
			}
		}
		catch (string temp)
		{
			temp = "The show is already booked for this time";
			cout << temp << endl;
		}
		programs.push_back(new Movie(t1, y, t2, Time_(h, m, 0)));
		break;
	}
	case 3:
	{
		string t1, t2;
		int h, m;
		cout << "Write treme" << endl;
		cin >> ws;
		getline(cin, t1);
		cout << "Write name" << endl;
		cin >> ws;
		getline(cin, t2);
		cout << "Write hours" << endl;
		cin >> h;
		cout << "Write minutes" << endl;
		cin >> m;
		try
		{
			vector<tvProgram*>::iterator it;
			for (it = programs.begin(); it != programs.end(); it++)
			{
				if ((*it)->getTime() == Time_(h, m, 0))
					throw;
			}
		}
		catch (string temp)
		{
			temp = "The show is already booked for this time";
			cout << temp << endl;
		}
		programs.push_back(new Show(t1, t2, Time_(h, m, 0)));
		break;
	}
	case 4:
	{
		string t2;
		int h, m, mina, maxa;
		cout << "Write minimal age" << endl;
		cin >> mina;
		cout << "Write max age" << endl;
		cin >> maxa;
		cout << "Write name" << endl;
		cin >> ws;
		getline(cin, t2);
		cout << "Write hours" << endl;
		cin >> h;
		cout << "Write minutes" << endl;
		cin >> m;
		try
		{
			vector<tvProgram*>::iterator it;
			for (it = programs.begin(); it != programs.end(); it++)
			{
				if ((*it)->getTime() == Time_(h, m, 0))
					throw;
			}
		}
		catch (string temp)
		{
			temp = "The show is already booked for this time";
			cout << temp << endl;
		}
		programs.push_back(new Children(mina, maxa, t2, Time_(h, m, 0)));
		break;
	}
	}
}
void DayProgram::findby()
{
	int menu = -1;
	cout << "Type - 1; Name - 2; Time - 3;" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1:
	{
		vector<tvProgram*>::iterator it;
		string type;
		cout << "Write type " << endl;
		cin >> ws;
		getline(cin, type);
		for (it = programs.begin(); it != programs.end(); it++)
		{
			if ((*it)->type() == type)
				cout << (*it)->toString();
		}
		break;
	}
	case 2:
	{
		vector<tvProgram*>::iterator it;
		string name;
		cout << "Write name " << endl;
		cin >> ws;
		getline(cin, name);
		for (it = programs.begin(); it != programs.end(); it++)
		{
			if ((*it)->getName() == name)
				cout << (*it)->toString();
		}
		break;
	}
	case 3:
	{
		vector<tvProgram*>::iterator it;
		int h, m;
		cout << "Write hours" << endl;
		cin >> h;
		cout << "Write minutes" << endl;
		cin >> m;
		for (it = programs.begin(); it != programs.end(); it++)
		{
			if ((*it)->getTime() == Time_(h, m, 0))
				cout << (*it)->toString();
		}
		break;
	}
	}
}
void DayProgram::mysort()
{
	sort(programs.begin(), programs.end(), mycompare);
}

bool mycompare(const tvProgram* lhs, const tvProgram* rhs)
{
	return lhs->getTime() < rhs->getTime();
}

void DayProgram::save(ofstream& file)
{
	if (file.is_open())
	{
		vector<tvProgram*>::iterator it;
		bool temp = false;
		for (it = programs.begin(); it != programs.end(); it++)
		{
			cout << (*it)->toString() << endl;
			cout << "This ?" << endl;
			cin >> temp;
			if (temp)
			{
				file << (*it)->type() << endl;
				file << (*it)->getTime() << endl;
				file << (*it)->getName() << endl;
				break;
			}
		}
	}

}

void DayProgram::load(ifstream& file)
{
	string name, temp;
	int h, m;
	getline(file, name);
	file >> h;
	file >> temp;
	file >> m;
}