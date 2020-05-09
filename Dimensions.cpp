#include "Dimensions.h"
//Габариты
void Dimensions::info()
{
	cout << "Dimensions " << dimensions << endl;
}

Dimensions::Dimensions()
{
	cout << "Введите габариты: ";
	cin >> dimensions;
	cout << "Габариты успешно указаны!" << endl << endl;
}
