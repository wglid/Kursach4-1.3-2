#include "Mark.h"
//Марка
void Mark::info()
{
	cout << "Mark: " << mark << endl;
}

Mark::Mark()
{
	cout << "Введите марку: ";
	cin >> mark;
	cout << "Марка успешно указана!" << endl << endl;
}

Mark::Mark(string line)
{
	mark = line;
}