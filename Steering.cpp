#include "Steering.h"
//������� ����������
void Steering::info()
{
	cout << "Steering: " << steering << endl;
}

Steering::Steering()
{
	cout << "������� ��� �������� ����������: ";
	cin >> steering;
	cout << "��� �������� ���������� ������� ������!" << endl << endl;
}

Steering::Steering(string line)
{
	steering = line;
}
