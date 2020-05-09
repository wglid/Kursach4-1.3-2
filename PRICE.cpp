#include "PRICE.h"
//Цена
void PRICE::info()
{
	cout << "Price" << endl;
}

PRICE::PRICE()
{
	cout << "Введите цену: ";
	cin >> price;
	cout << "Новая цена успешно указана!" << endl << endl;
}


