#include "Year.h"
//Год выпуска
void Year::info()
{
	cout << "Year: " << year << endl;
}

Year::Year()
{
	cout << "Введите год выпуска: ";
	cin >> year;
	cout << "Тип рулевого управления успешно указан!" << endl << endl;
}

Year::Year(string line)
{
	year = line;
}
