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
	Motobike MotoBuilder;
	Quadrobike QuadroBuilder;
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
			<< "[4] ������� ������������ ������ �� �����" << endl 
			<< "[5] ��������" << endl
			<< "[6] ����������" << endl << endl
			<< "\t" << "���������" << endl
			<< "[7] �������� ��������" << endl
			<< "[8] ������� ��������" << endl
			<< "[9] ������������� ��������" << endl
			<< "[10] ������� ������������ ��������� �� �����" << endl
			<< "[11] ��������" << endl
			<< "[12] ����������" << endl << endl
			<< "\t" << "�����������" << endl
			<< "[13] �������� ����������" << endl
			<< "[14] ������� ����������" << endl
			<< "[15] ������������� ����������" << endl
			<< "[16] ������� ������������ ����������� �� �����" << endl
			<< "[17] ��������" << endl
			<< "[18] ����������" << endl << endl
			<< "[0] �����" << endl;
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		system("CLS");
		switch (button)
		{
		
		case 1:
			Machinera.push_back(dir.createMachine(CarBuilder));
			system("pause");
			break;
		case 2:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "["<< i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "������� ������" << endl;
			}
			break;
		case 3:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
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
			while (!fin.eof())
			{
				if (fin.peek() == -1)
				{
					break;
				}
				Machinera.push_back(new Machine);
				Machinera[Machinera.size() - 1]->Load(fin);
			}
			fin.close();
			if (!Machinera.size())
				cout << "���� ����. ��������� ���!" << endl;
			else
				cout << "�� ����� ���� ��������� " << Machinera.size() << " ���������." << endl;
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

		case 7:
			Machinera.push_back(dir.createMachine(MotoBuilder));
			system("pause");
			break;
		case 8:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "������� ������" << endl;
			}
			break;
		case 9:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
		case 10:
			cout << "----------------------------------" << endl
				<< "               ���������           " << endl
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
		case 11:
			i = 0;
			fin.open("Motobike.txt");
			while (!fin.eof())
			{
				if (fin.peek() == -1)
				{
					break;
				}
				Machinera.push_back(new Machine);
				Machinera[Machinera.size() - 1]->Load(fin);
			}
			fin.close();
			if (!Machinera.size())
				cout << "���� ����. ��������� ���!" << endl;
			else
				cout << "�� ����� ���� ��������� " << Machinera.size() << " ���������." << endl;
			break;
		case 12:
			i = 0;
			fout.open("Motobike.txt");
			for (size_t i = 0; i < Machinera.size(); i++)
			{
				Machinera[i]->Save(fout);
			}
			fout.close();
			break;

		case 13:
			Machinera.push_back(dir.createMachine(QuadroBuilder));
			system("pause");
			break;
		case 14:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "������� ������" << endl;
			}
			break;
		case 15:
			if (!Machinera.size())
			{
				cout << "��������� ���." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "��� �����: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
		case 16:
			cout << "----------------------------------" << endl
				<< "               �����������         " << endl
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
		case 17:
			i = 0;
			fin.open("Quadrobike.txt");
			while (!fin.eof())
			{
				if (fin.peek() == -1)
				{
					break;
				}
				Machinera.push_back(new Machine);
				Machinera[Machinera.size() - 1]->Load(fin);
			}
			fin.close();
			if (!Machinera.size())
				cout << "���� ����. ��������� ���!" << endl;
			else
				cout << "�� ����� ���� ��������� " << Machinera.size() << " ���������." << endl;
			break;
		case 18:
			i = 0;
			fout.open("Quadrobike.txt");
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

