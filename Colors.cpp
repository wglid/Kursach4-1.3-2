#include "Colors.h"
//�����
void Colors::info()
{
	cout << "Colors: " << colors << endl;
}

Colors::Colors()
{
	cout << "������� �������� ����:	";
	cin >> colors;
	cout << "����� ���� ������� ������!" << endl << endl;
}

Colors::Colors(string line)
{
	colors = line;
}

