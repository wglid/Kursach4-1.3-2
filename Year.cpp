#include "Year.h"
//��� �������
void Year::info()
{
	cout << "Year: " << year << endl;
}

Year::Year()
{
	cout << "������� ��� �������: ";
	cin >> year;
	cout << "��� �������� ���������� ������� ������!" << endl << endl;
}

Year::Year(string line)
{
	year = line;
}
