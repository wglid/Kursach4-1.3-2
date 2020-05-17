#include "Machine.h"

void Machine::info()
{
	int i;

	for (i = 0; i < arrayaddMark.size(); ++i)  arrayaddMark[i].info();
	for (i = 0; i < arrayaddModel.size(); ++i)  arrayaddModel[i].info();
	for (i = 0; i < arrayaddDimensions.size(); ++i)  arrayaddDimensions[i].info();
	for (i = 0; i < arrayEngine.size(); ++i)  arrayEngine[i].info();
	for (i = 0; i < arrayEngine_vol.size(); ++i)  arrayEngine_vol[i].info();
	for (i = 0; i < arrayaddFuel.size(); ++i)  arrayaddFuel[i].info();
	for (i = 0; i < arrayaddOil_lose.size(); ++i)  arrayaddOil_lose[i].info();
	for (i = 0; i < arrayaddSteering.size(); ++i)  arrayaddSteering[i].info();
	for (i = 0; i < arrayaddTrunk.size(); ++i)  arrayaddTrunk[i].info();
	for (i = 0; i < arrayYearX.size(); ++i)  arrayYearX[i].info();
	for (i = 0; i < arrayColors.size(); ++i)  arrayColors[i].info();
	for (i = 0; i < arrayPRICE.size(); ++i)  arrayPRICE[i].info();	

}

void Machine::Save(ofstream& fout)
{
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		for (int index = 0; index < arrayaddMark.size(); index++)
			fout << arrayaddMark[index].mark << endl;
		for (int index = 0; index < arrayaddModel.size(); index++)
			fout << arrayaddModel[index].model << endl;
		for (int index = 0; index < arrayaddDimensions.size(); index++)
			fout << arrayaddDimensions[index].dimensions << endl;
		for (int index = 0; index < arrayEngine.size(); index++)
			fout << arrayEngine[index].engine << endl;
		for (int index = 0; index < arrayEngine_vol.size(); index++)
			fout << arrayEngine_vol[index].engine_volume << endl;
		for (int index = 0; index < arrayaddFuel.size(); index++)
			fout << arrayaddFuel[index].fuel << endl;
		for (int index = 0; index < arrayaddOil_lose.size(); index++)
			fout << arrayaddOil_lose[index].oil << endl;
		for (int index = 0; index < arrayaddSteering.size(); index++)
			fout << arrayaddSteering[index].steering << endl;
		for (int index = 0; index < arrayaddTrunk.size(); index++)
			fout << arrayaddTrunk[index].trunk << endl;
		for (int index = 0; index < arrayYearX.size(); index++)
			fout << arrayYearX[index].year << endl;
		for (int index = 0; index < arrayColors.size(); index++)
			fout << arrayColors[index].colors << endl;
		for (int index = 0; index < arrayPRICE.size(); index++)
			fout << arrayPRICE[index].price << endl;
	}
}

void Machine::Load(ifstream& fin)
{
	if (!fin.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		string line;
		getline(fin, line);
		arrayaddMark.push_back(line);
		getline(fin, line);
		arrayaddModel.push_back(line);
		getline(fin, line);
		arrayaddDimensions.push_back(line);
		getline(fin, line);
		arrayEngine.push_back(line);
		getline(fin, line);
		arrayEngine_vol.push_back(line);
		getline(fin, line);
		arrayaddFuel.push_back(line);
		getline(fin, line);
		arrayaddOil_lose.push_back(line);
		getline(fin, line);
		arrayaddSteering.push_back(line);
		getline(fin, line);
		arrayaddTrunk.push_back(line);
		getline(fin, line);
		arrayYearX.push_back(line);
		getline(fin, line);
		arrayColors.push_back(line);
		getline(fin, line);
		arrayPRICE.push_back(line);
	}
}

void Machine::Edit()
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
			cout << arrayaddMark[index].mark << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Название не может быть пустым";
			arrayaddMark[index].mark = sTmp;

			break;
		}
		case 2:
		{
			cout << arrayaddModel[index].model << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение модели равна нулю или отрицательна";
			}
			arrayaddModel[index].model = sTmp;
			break;
		}
		case 3:
		{
			cout << arrayaddDimensions[index].dimensions << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение габаритов равно нулю или отрицательно";
			}
			arrayaddDimensions[index].dimensions = sTmp;
			break;
		}
		case 4:
		{
			cout << arrayEngine[index].engine << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение двигателя равна нулю или отрицательна";
			}
			arrayEngine[index].engine = sTmp;
			break;
		}
		case 5:
		{
			cout << arrayEngine_vol[index].engine_volume << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение обьема двигателя равно нулю или отрицательно";
			}
			arrayEngine_vol[index].engine_volume = sTmp;
			break;
		}
		case 6:
		{
			cout << arrayaddFuel[index].fuel << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение топлива равно нулю или отрицательно";
			}
			arrayaddFuel[index].fuel = sTmp;
			break;
		}
		case 7:
		{
			cout << arrayaddOil_lose[index].oil << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение расхода топлива равно нулю или отрицательно";
			}
			arrayaddOil_lose[index].oil = sTmp;
			break;
		}
		case 8:
		{
			cout << arrayaddSteering[index].steering << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение рулевого управления равно нулю или отрицательно";
			}
			arrayaddSteering[index].steering = sTmp;
			break;
		}
		case 9:
		{
			cout << arrayaddTrunk[index].trunk << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение обьема багажника равно нулю или отрицательно";
			}
			arrayaddTrunk[index].trunk = sTmp;
			break;
		}
		case 10:
		{
			cout << arrayYearX[index].year << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение года равно нулю или отрицательно";
			}
			arrayYearX[index].year = sTmp;
			break;
		}
		case 11:
		{
			cout << arrayColors[index].colors << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение цвета равно нулю или отрицательно";
			}
			arrayColors[index].colors = sTmp;
			break;
		}
		case 12:
		{
			cout << arrayPRICE[index].price << endl;
			cout << "Новое значение: ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
			{
				throw (string)"Значение цены равно нулю или отрицательно";
			}
			arrayPRICE[index].price = sTmp;
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

void Machine::AddUp(ofstream& fout)
{
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "\tМашины:" << endl;

		for (int index = 0; index < arrayaddMark.size(); index++)
			fout << arrayaddMark[index].mark << endl;
		for (int index = 0; index < arrayaddModel.size(); index++)
			fout << arrayaddModel[index].model << endl;
		for (int index = 0; index < arrayaddDimensions.size(); index++)
			fout << arrayaddDimensions[index].dimensions << endl;
		for (int index = 0; index < arrayEngine.size(); index++)
			fout << arrayEngine[index].engine << endl;
		for (int index = 0; index < arrayEngine_vol.size(); index++)
			fout << arrayEngine_vol[index].engine_volume << endl;
		for (int index = 0; index < arrayaddFuel.size(); index++)
			fout << arrayaddFuel[index].fuel << endl;
		for (int index = 0; index < arrayaddOil_lose.size(); index++)
			fout << arrayaddOil_lose[index].oil << endl;
		for (int index = 0; index < arrayaddSteering.size(); index++)
			fout << arrayaddSteering[index].steering << endl;
		for (int index = 0; index < arrayaddTrunk.size(); index++)
			fout << arrayaddTrunk[index].trunk << endl;
		for (int index = 0; index < arrayYearX.size(); index++)
			fout << arrayYearX[index].year << endl;
		for (int index = 0; index < arrayColors.size(); index++)
			fout << arrayColors[index].colors << endl;
		for (int index = 0; index < arrayPRICE.size(); index++)
			fout << arrayPRICE[index].price << endl;
	}
}