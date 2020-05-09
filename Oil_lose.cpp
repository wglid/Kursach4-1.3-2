#include "Oil_lose.h"
//Расход по городу
void Oil_lose::info()
{
	cout << "Oil lose" << endl;
}

Oil_lose::Oil_lose()
{
	cout << "Введите расход топлива по городу: ";
	cin >> oil;
	cout << "Расход топлива по городу успешно указан!" << endl << endl;
}