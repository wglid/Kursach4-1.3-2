/*������� ����� ��������� ������ �������, � ���������� ������ �������� �� 
����� �������� : ��������, ���������� � �������� ������.������������
������� �����������.��������� �������� ���������� � ��� �� ��������������
(����, ����, ��� ���������, ����� ���������, ��� �������, �����, ������,
�������, ���������� � �������, ��� �������� ����������, ������ ������� ��
������, ����� ���������) ������������ � �������� ����� �� ���� ����������
�motorbike�, �quadbike�, �car�.����� ������������ ����� ��������� �����
��������� ���������, ��� ������, ��� ����������� �� ���������������� �����.*/

#include "Director.h"
#include "Car.h"
#include "Motobike.h"
#include "Quadrobike.h"
#include "fstream"
#include "string"
#include "iostream"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	Car Data;

	Data.Save_Car();
	Data.Load_Car();
	//Data.Print(ostream & out);
	Data.Edit_Car();
	Data.Save_Car();
	Data.Load_Car();
	



	
	return 0;
}