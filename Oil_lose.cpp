#include "Oil_lose.h"
//������ �� ������
void Oil_lose::info()
{
	cout << "Oil lose" << endl;
}

Oil_lose::Oil_lose()
{
	cout << "������� ������ ������� �� ������: ";
	cin >> oil;
	cout << "������ ������� �� ������ ������� ������!" << endl << endl;
}