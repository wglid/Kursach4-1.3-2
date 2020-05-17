#include "Oil_lose.h"
//Расход по городу
void Oil_lose::info()
{
	cout << "Oil lose: " << oil << endl;
}

Oil_lose::Oil_lose()
{
	cout << "Введите расход топлива по городу: ";
	cin >> oil;
	cout << "Расход топлива по городу успешно указан!" << endl << endl;
}

Oil_lose::Oil_lose(string line)
{
	oil = line;
}
