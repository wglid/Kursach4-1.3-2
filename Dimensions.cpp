#include "Dimensions.h"
//��������
void Dimensions::info()
{
	cout << "Dimensions " << dimensions << endl;
}

Dimensions::Dimensions()
{
	cout << "������� ��������: ";
	cin >> dimensions;
	cout << "�������� ������� �������!" << endl << endl;
}
