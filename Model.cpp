#include "Model.h"
//������
void Model::info()
{
	cout << "Model: " << model << endl;
}

Model::Model()
{
	cout << "������� ������: ";
	cin >> model;
	cout << "������ ������� ������!" << endl << endl;
}

Model::Model(string line)
{
	model = line;
}
