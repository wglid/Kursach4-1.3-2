#include "Fuel.h"
//�������
void Fuel::info()
{
	cout << "Fuel: " << fuel<< endl;
}

Fuel::Fuel()
{
	cout << "������� ���������� �� �������: ";
	cin >> fuel;
	cout << "���������� �� ������� ������� ������!" << endl << endl;
}

Fuel::Fuel(string line)
{
	fuel = line;
}
