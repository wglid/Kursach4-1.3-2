#include "Engine_volume.h"
//Обьем двигателя
void Engine_volume::info()
{
	cout << "Engine volume" << endl;
}

Engine_volume::Engine_volume()
{
	cout << "Введите обьем двигателя: ";
	cin >> engine_volume;
	cout << "Обьем двигателя успешно указан!" << endl << endl;
}


