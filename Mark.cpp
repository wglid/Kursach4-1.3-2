#include "Mark.h"
//�����
void Mark::info()
{
	cout << "Mark: " << mark << endl;
}

Mark::Mark()
{
	cout << "������� �����: ";
	cin >> mark;
	cout << "����� ������� �������!" << endl << endl;
}

Mark::Mark(string line)
{
	mark = line;
}