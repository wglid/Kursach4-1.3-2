#include "Mark.h"
//Марка
void Mark::info()
{
	cout << "Mark" << endl;
}

Mark::Mark()
{
	cout << "Введите марку: ";
	cin >> mark;
	cout << "Марка успешно указана!" << endl << endl;
}
