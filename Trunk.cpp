#include "Trunk.h"
//����� ���������
void Trunk::info()
{
	cout << "Trunk volume: " << trunk << endl;
}

Trunk::Trunk()
{
	cout << "������� ����� ���������: ";
	cin >> trunk;
	cout << "����� ��������� ������� ������!" << endl << endl;
}

Trunk::Trunk(string line)
{
	trunk = line;
}
