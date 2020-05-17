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
#include <fstream>
#include <string>
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream fout;
	ifstream fin;
	int idx = 0;
	vector <Machine*> Machinera;
	int button;
	bool flag = true;
	int x = 0;
	int i = 0;
	Director dir;
	Car CarBuilder;
	while(flag)
	{
		system("cls");
		cout << "----------------------------------" << endl
			<< "               ����               " << endl
			<< "----------------------------------" << endl
			<< "\t" << "������" << endl
			<< "[1] �������� ������" << endl
			<< "[2] ������� ������" << endl
			<< "[3] ������������� ������" << endl
			<< "[4] ������� ������������ ������ ����� �� �����" << endl 
			<< "[5] ��������" << endl
			<< "[6] ����������" << endl << endl
			<< "[0] �����" << endl;
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button)
		{
		
		case 1:
			Machinera.push_back(dir.createMachine(CarBuilder));
			system("pause");
			break;
		
		case 3:
			/*
			����� ����� �������
			cin >> x;
			Machinera[x]->Edit();
			*/
		case 4:
			cout << "----------------------------------" << endl
				<< "               ������               " << endl
				<< "----------------------------------" << endl;
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					Machinera[i]->info();
				}
			cout << endl;
			break;
		case 5:
			i = 0;
			fin.open("Car.txt");
			while (fin)
			{
				Machinera.push_back(new Machine);
				Machinera[Machinera.size() - 1]->Load(fin);
			}
			fin.close();
			break;
		case 6:
			i = 0;
			fout.open("Car.txt");
			for (size_t i = 0; i < Machinera.size(); i++)
			{
				Machinera[i]->Save(fout);
			}
			fout.close();
			break;
		case 0:
			flag = false;
			break;
		default:
			cout << "������� ������������ �������" << endl << endl;
			break;
		}
		system("pause");
	}

	return 0;
}

/*Data.Save();
Data.Load();
Data.Edit();
Data.Save();
//Data.Print(out);
//Data.Load();
Data.Delete();
Data.Load();
//Data.AddUp();*/