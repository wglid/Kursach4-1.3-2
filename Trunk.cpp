#include "Trunk.h"
//Обьем багажника
void Trunk::info()
{
	cout << "Trunk volume: " << trunk << endl;
}

Trunk::Trunk()
{
	cout << "Введите объем багажника: ";
	cin >> trunk;
	cout << "Объем багажника успешно указан!" << endl << endl;
}

Trunk::Trunk(string line)
{
	trunk = line;
}
