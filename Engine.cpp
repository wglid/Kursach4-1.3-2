#include "Engine.h"
//Двигатель
void Engine::info()
{
	cout << "Engine: " << engine << endl;
}

Engine::Engine()
{
	cout << "Введите тип двигателя: ";
	cin >> engine;
	cout << "Габариты успешно указаны!" << endl << endl;
}

Engine::Engine(string line)
{
	engine = line;
}
