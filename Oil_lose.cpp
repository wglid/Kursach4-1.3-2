#include "Oil_lose.h"
//������ �� ������
void Oil_lose::info()
{
	cout << "Oil lose: " << oil << endl;
}

Oil_lose::Oil_lose()
{
	cout << "������� ������ ������� �� ������: ";
	cin >> oil;
	cout << "������ ������� �� ������ ������� ������!" << endl << endl;
}

Oil_lose::Oil_lose(string line)
{
	oil = line;
}
