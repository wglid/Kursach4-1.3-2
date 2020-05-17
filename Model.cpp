#include "Model.h"
//Модель
void Model::info()
{
	cout << "Model: " << model << endl;
}

Model::Model()
{
	cout << "Введите модель: ";
	cin >> model;
	cout << "Модель успешно указан!" << endl << endl;
}

Model::Model(string line)
{
	model = line;
}
