#include "Fuel.h"
//Топливо
void Fuel::info()
{
	cout << "Fuel: " << fuel<< endl;
}

Fuel::Fuel()
{
	cout << "Введите требования по топливу: ";
	cin >> fuel;
	cout << "Требования по топливу успешно указан!" << endl << endl;
}

Fuel::Fuel(string line)
{
	fuel = line;
}
