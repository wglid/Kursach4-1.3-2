#include "Colors.h"
//Цвета
void Colors::info()
{
	cout << "Colors" << endl;
}

Colors::Colors()
{
	cout << "Введите желаемый цвет:	";
	cin >> colors;
	cout << "Новый цвет успешно указан!" << endl << endl;
}
