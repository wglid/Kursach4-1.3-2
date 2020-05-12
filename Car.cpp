#include "Car.h"
#include "fstream"
#include "Director.h"
#include "string"
#include "iostream"

string path = "Car.txt";

Director dir;
Car ra_builder;
Machine* ra = dir.createMachine(ra_builder);

void Car::createMachine()
{
	p = new Machine;
}
void Car::Mark_type()
{
	p->arrayaddMark.push_back(Mark());
}
void Car::Dimensions_type()
{
	p->arrayaddDimensions.push_back(Dimensions());
}
void Car::Engine_type()
{
	p->arrayEngine.push_back(Engine());
}
void Car::Engine_volume_type()
{
	p->arrayEngine_vol.push_back(Engine_volume());
}
void Car::Fuel_type()
{
	p->arrayaddFuel.push_back(Fuel());
}
void Car::Oil_lose_type()
{
	p->arrayaddOil_lose.push_back(Oil_lose());
}
void Car::Steering_type()
{
	p->arrayaddSteering.push_back(Steering());
}
void Car::Trunk_type()
{
	p->arrayaddTrunk.push_back(Trunk());
}
void Car::Model_type()
{
	p->arrayaddModel.push_back(Model());
}
void Car::Year_create()
{
	p->arrayYearX.push_back(Year());
}
void Car::addColors()
{
	p->arrayColors.push_back(Colors());
}
void Car::addPrice()
{
	p->arrayPRICE.push_back(PRICE());
}


void Car::Save_Car()
{
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "\tМашины:" << endl;

		for (int index = 0; index < ra->arrayaddMark.size(); index++)
			fout << ra->arrayaddMark[index].mark << endl;
		for (int index = 0; index < ra->arrayaddModel.size(); index++)
			fout << ra->arrayaddModel[index].model << endl;
		for (int index = 0; index < ra->arrayaddDimensions.size(); index++)
			fout << ra->arrayaddDimensions[index].dimensions << endl;
		for (int index = 0; index < ra->arrayEngine.size(); index++)
			fout << ra->arrayEngine[index].engine << endl;
		for (int index = 0; index < ra->arrayEngine_vol.size(); index++)
			fout << ra->arrayEngine_vol[index].engine_volume << endl;
		for (int index = 0; index < ra->arrayaddFuel.size(); index++)
			fout << ra->arrayaddFuel[index].fuel << endl;
		for (int index = 0; index < ra->arrayaddOil_lose.size(); index++)
			fout << ra->arrayaddOil_lose[index].oil << endl;
		for (int index = 0; index < ra->arrayaddSteering.size(); index++)
			fout << ra->arrayaddSteering[index].steering << endl;
		for (int index = 0; index < ra->arrayaddTrunk.size(); index++)
			fout << ra->arrayaddTrunk[index].trunk << endl;
		for (int index = 0; index < ra->arrayYearX.size(); index++)
			fout << ra->arrayYearX[index].year << endl;
		for (int index = 0; index < ra->arrayColors.size(); index++)
			fout << ra->arrayColors[index].colors << endl;
		for (int index = 0; index < ra->arrayPRICE.size(); index++)
			fout << ra->arrayPRICE[index].price << endl;
	}
	fout.close();
}
void Car::Load_Car()
{
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		string line;
		for (int i = 0; i < 12; ++i)
		{
			getline(fin, line);
			cout << line << endl;
		}
	}
	fin.close();
}
void Car::Edit_Car()
{
	try
	{
		int i;
		int index = 0;
		string sTmp;

		cout << "Выберите параметр для изменения:" << endl

			<< "[1] Марка" << endl

			<< "[2] Модель" << endl

			<< "[3] Габариты" << endl

			<< "[4] Двигатель" << endl

			<< "[5] Обьем двигателя" << endl

			<< "[6] Топливо" << endl

			<< "[7] Расход топлива" << endl

			<< "[8] Тип рулевого управления" << endl

			<< "[9] Обьем багажника" << endl

			<< "[10] Год выпуска" << endl

			<< "[11] Цвет" << endl

			<< "[12] Цена" << endl

			<< "Ваш выбор: ";
		cin >> i;
		if (i < 1 || i > 12)

		{

			throw (string)"Параметра с данным индексом не существует";

		}

		switch (i)
		{
		case 1:
		{
			cout << ra->arrayaddMark[index].mark << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Название не может быть пустым";
			ra->arrayaddMark[index].mark = sTmp;

			break;
		}
		case 2:
		{
			cout << ra->arrayaddModel[index].model << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение модели равна нулю или отрицательна";
			}
			ra->arrayaddModel[index].model = sTmp;
			break;
		}
		case 3:
		{
			cout << ra->arrayaddDimensions[index].dimensions << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение габаритов равно нулю или отрицательно";
			}
			ra->arrayaddDimensions[index].dimensions = sTmp;
			break;
		}
		case 4:
		{
			cout << ra->arrayEngine[index].engine << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение двигателя равна нулю или отрицательна";
			}
			ra->arrayEngine[index].engine = sTmp;
			break;
		}
		case 5:
		{
			cout << ra->arrayEngine_vol[index].engine_volume << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение обьема двигателя равно нулю или отрицательно";
			}
			ra->arrayEngine_vol[index].engine_volume = sTmp;
			break;
		}
		case 6:
		{
			cout << ra->arrayaddFuel[index].fuel << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение топлива равно нулю или отрицательно";
			}
			ra->arrayaddFuel[index].fuel = sTmp;
			break;
		}
		case 7:
		{
			cout << ra->arrayaddOil_lose[index].oil << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение расхода топлива равно нулю или отрицательно";
			}
			ra->arrayaddOil_lose[index].oil = sTmp;
			break;
		}
		case 8:
		{
			cout << ra->arrayaddSteering[index].steering << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение рулевого управления равно нулю или отрицательно";
			}
			ra->arrayaddSteering[index].steering = sTmp;
			break;
		}
		case 9:
		{
			cout << ra->arrayaddTrunk[index].trunk << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение обьема багажника равно нулю или отрицательно";
			}
			ra->arrayaddTrunk[index].trunk = sTmp;
			break;
		}
		case 10:
		{
			cout << ra->arrayYearX[index].year << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение года равно нулю или отрицательно";
			}
			ra->arrayYearX[index].year = sTmp;
			break;
		}
		case 11:
		{
			cout << ra->arrayColors[index].colors << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение цвета равно нулю или отрицательно";
			}
			ra->arrayColors[index].colors = sTmp;
			break;
		}
		case 12:
		{
			cout << ra->arrayPRICE[index].price << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение цены равно нулю или отрицательно";
			}
			ra->arrayPRICE[index].price = sTmp;
			break;
		}
		default:
			break;
		}	
	}
	catch (string err)
	{
		cout << "ERROR: " + err << endl;
	}
}
/*void Car::Print(ostream& out)
{
	
	int index = 0;

	out << "----------------------------------\n    Машины   \n----------------------------------" << endl

		<< "Марка : " << ra->arrayaddMark[index].mark << endl

		<< "Модель : " << ra->arrayaddModel[index].model << endl

		<< "Габариты : " << ra->arrayaddDimensions[index].dimensions << endl

		<< "Двигатель : " << ra->arrayEngine[index].engine << endl

		<< "Обьем двигателя : " << ra->arrayEngine_vol[index].engine_volume << endl

		<< "Топливо : " << ra->arrayaddFuel[index].fuel << endl

		<< "Расход : " << ra->arrayaddOil_lose[index].oil << endl

		<< "Рулевое управление : " << ra->arrayaddSteering[index].steering << endl

		<< "Обьем багажника : " << ra->arrayaddTrunk[index].trunk << endl

		<< "Год выпуска : " << ra->arrayYearX[index].year << endl

		<< "Цвет : " << ra->arrayColors[index].colors << endl

		<< "Цена : " << ra->arrayPRICE[index].price << endl;

}*/