#include "Steering.h"
//Рулевое управление
void Steering::info()
{
	cout << "Steering: " << steering << endl;
}

Steering::Steering()
{
	cout << "Введите тип рулевого управления: ";
	cin >> steering;
	cout << "Тип рулевого управления успешно указан!" << endl << endl;
}

Steering::Steering(string line)
{
	steering = line;
}
