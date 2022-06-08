// tv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "DayProgram.h"
#include <ostream>
using namespace std;


int main()
{
	DayProgram pr;
	int menu = -1;
	while (menu != 0)
	{
		cout << "Add - 1; Sort - 2; Find by - 3; Save - 4; Load - 5; Show - 6;" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			pr.add();
			break;
		}
		case 2:
		{
			pr.mysort();
			break;
		}

		case 3:
		{
			pr.findby();
			break;
		}

		case 4:
		{
			ofstream out;
			string path;
			cout << "Write path" << endl;
			cin >> ws;
			getline(cin, path);
			out.open(path);
			pr.save(out);
			break;
		}

		case 5:
		{
			ifstream in;
			string path;
			cout << "Write path" << endl;
			cin >> ws;
			getline(cin, path);
			in.open(path);
			pr.load(in);
			break;
		}

		case 6:
		{
			pr.show();
			break;
		}
		}
	}

	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
