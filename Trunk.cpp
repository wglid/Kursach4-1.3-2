#include "Trunk.h"
//Обьем багажника
void Trunk::info()
{
	cout << "Trunk volume" << endl;
}

Trunk::Trunk()
{
	cout << "Введите объем багажника: ";
	cin >> trunk;
	cout << "Объем багажника успешно указан!" << endl << endl;
}
