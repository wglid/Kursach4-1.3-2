#include "PRICE.h"
//����
void PRICE::info()
{
	cout << "Price: " << price << endl << endl;
}

PRICE::PRICE()
{
	cout << "������� ����: ";
	cin >> price;
	cout << "����� ���� ������� �������!" << endl << endl;
}

PRICE::PRICE(string line)
{
	price = line;
}
