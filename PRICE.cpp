#include "PRICE.h"
//Цена
void PRICE::info()
{
	cout << "Price: " << price << endl << endl;
}

PRICE::PRICE()
{
	cout << "Введите цену: ";
	cin >> price;
	cout << "Новая цена успешно указана!" << endl << endl;
}

PRICE::PRICE(string line)
{
	price = line;
}
