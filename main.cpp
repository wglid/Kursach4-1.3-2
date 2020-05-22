/*Создать класс «Конвейер сборки машины», в результате работы которого мы 
можем получить : мотоцикл, квадроцикл и легковую машину.Использовать
паттерн «Строитель».Результат создания транспорта и все их характеристики
(цвет, цена, тип двигателя, объем двигателя, год выпуска, марка, модель,
размеры, требования к топливу, тип рулевого управления, расход топлива по
городу, объем багажника) записываются в выходные файлы по типу транспорта
«motorbike», «quadbike», «car».Также пользователь может загрузить ранее
созданные мотоциклы, или машины, или квадроциклы из соответствующего файла.*/

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
			<< "               МЕНЮ               " << endl
			<< "----------------------------------" << endl
			<< "\t" << "Машины" << endl
			<< "[1] Добавить машину" << endl
			<< "[2] Удалить машину" << endl
			<< "[3] Редактировать машину" << endl
			<< "[4] Вывести существующие машины на экран" << endl 
			<< "[5] Загрузка" << endl
			<< "[6] Сохранение" << endl << endl
			<< "\t" << "Мотоциклы" << endl
			<< "[7] Добавить мотоцикл" << endl
			<< "[8] Удалить мотоцикл" << endl
			<< "[9] Редактировать мотоцикл" << endl
			<< "[10] Вывести существующие мотоциклы на экран" << endl
			<< "[11] Загрузка" << endl
			<< "[12] Сохранение" << endl << endl
			<< "\t" << "Квадроциклы" << endl
			<< "[13] Добавить квадроцикл" << endl
			<< "[14] Удалить квадроцикл" << endl
			<< "[15] Редактировать квадроцикл" << endl
			<< "[16] Вывести существующие квадроциклы на экран" << endl
			<< "[17] Загрузка" << endl
			<< "[18] Сохранение" << endl << endl
			<< "[0] Выход" << endl;
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
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "["<< i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "Элемент удален" << endl;
			}
			break;
		case 3:
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
		case 4:
			cout << "----------------------------------" << endl
				<< "               МАШИНЫ               " << endl
				<< "----------------------------------" << endl;
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
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
				cout << "Файл пуст. Элементов нет!" << endl;
			else
				cout << "Из Файла было загружено " << Machinera.size() << " элементов." << endl;
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
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "Элемент удален" << endl;
			}
			break;
		case 9:
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
		case 10:
			cout << "----------------------------------" << endl
				<< "               МОТОЦИКЛЫ           " << endl
				<< "----------------------------------" << endl;
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
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
				cout << "Файл пуст. Элементов нет!" << endl;
			else
				cout << "Из Файла было загружено " << Machinera.size() << " элементов." << endl;
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
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera.erase(Machinera.begin() + idx);
				cout << "Элемент удален" << endl;
			}
			break;
		case 15:
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
			}
			else
			{
				for (size_t i = 0; i < Machinera.size(); i++)
				{
					cout << "[" << i << "] " << Machinera[i]->arrayaddMark[0].mark << " " << Machinera[i]->arrayaddModel[0].model << endl;
				}
				cout << "Выш выбор: ";
				cin >> idx;
				Machinera[idx]->Edit();
			}
			break;
		case 16:
			cout << "----------------------------------" << endl
				<< "               КВАДРОЦИКЛЫ         " << endl
				<< "----------------------------------" << endl;
			if (!Machinera.size())
			{
				cout << "Элементов нет." << endl;
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
				cout << "Файл пуст. Элементов нет!" << endl;
			else
				cout << "Из Файла было загружено " << Machinera.size() << " элементов." << endl;
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
			cout << "Введена некорректная команда" << endl << endl;
			break;
		}
		system("pause");
	}

	return 0;
}

