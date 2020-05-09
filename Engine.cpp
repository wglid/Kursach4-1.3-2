#include "Engine.h"
//Двигатель
void Engine::info()
{
	cout << "Engine" << endl;
}

Engine::Engine()
{
	cout << "Введите тип двигателя: ";
	cin >> engine;
	cout << "Габариты успешно указаны!" << endl << endl;
}

