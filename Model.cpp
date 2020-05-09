#include "Model.h"
//Модель
void Model::info()
{
	cout << "Model" << endl;
}

Model::Model()
{
	cout << "Введите модель: ";
	cin >> model;
	cout << "Модель успешно указан!" << endl << endl;
}
