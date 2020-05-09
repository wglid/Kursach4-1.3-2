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
#include "fstream"
#include "string"
#include "iostream"

int main()
{
	setlocale(LC_ALL, "");
	
	Director dir;
	Car ra_builder;
	Motobike ca_builder;
	Quadrobike da_builder;
	Machine* ra = dir.createMachine(ra_builder);
	Machine* ca = dir.createMachine(ca_builder);
	Machine* da = dir.createMachine(da_builder);
		
	string path = "Car.txt";
	string path1 = "Motobike.txt";
	string path2 = "Quadrobike.txt";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;

		for (int index = 0; index < ra->arrayaddMark.size(); index++)
			fout << ra->arrayaddMark[index].mark;
		for (int index = 0; index < ra->arrayaddModel.size(); index++)
			fout << ra->arrayaddModel[index].model;
		for (int index = 0; index < ra->arrayaddDimensions.size(); index++)
			fout << ra->arrayaddDimensions[index].dimensions;
		for (int index = 0; index < ra->arrayEngine.size(); index++)
			fout << ra->arrayEngine[index].engine;
		for (int index = 0; index < ra->arrayEngine_vol.size(); index++)
			fout << ra->arrayEngine_vol[index].engine_volume;
		for (int index = 0; index < ra->arrayaddFuel.size(); index++)
			fout << ra->arrayaddFuel[index].fuel;
		for (int index = 0; index < ra->arrayaddOil_lose.size(); index++)
			fout << ra->arrayaddOil_lose[index].oil;
		for (int index = 0; index < ra->arrayaddSteering.size(); index++)
			fout << ra->arrayaddSteering[index].steering;
		for (int index = 0; index < ra->arrayaddTrunk.size(); index++)
			fout << ra->arrayaddTrunk[index].trunk;
		for (int index = 0; index < ra->arrayYearX.size(); index++)
			fout << ra->arrayYearX[index].year;
		for (int index = 0; index < ra->arrayColors.size(); index++)
			fout << ra->arrayColors[index].colors;
		for (int index = 0; index < ra->arrayPRICE.size(); index++)
			fout << ra->arrayPRICE[index].price;
	}
	fout.close();

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		
	}
	fin.close();

	fout.open(path1, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;

		for (int index = 0; index < ca->arrayaddMark.size(); index++)
			fout << ca->arrayaddMark[index].mark;
		for (int index = 0; index < ca->arrayaddModel.size(); index++)
			fout << ca->arrayaddModel[index].model;
		for (int index = 0; index < ca->arrayaddDimensions.size(); index++)
			fout << ca->arrayaddDimensions[index].dimensions;
		for (int index = 0; index < ca->arrayEngine.size(); index++)
			fout << ca->arrayEngine[index].engine;
		for (int index = 0; index < ca->arrayEngine_vol.size(); index++)
			fout << ca->arrayEngine_vol[index].engine_volume;
		for (int index = 0; index < ca->arrayaddFuel.size(); index++)
			fout << ca->arrayaddFuel[index].fuel;
		for (int index = 0; index < ca->arrayaddOil_lose.size(); index++)
			fout << ca->arrayaddOil_lose[index].oil;
		for (int index = 0; index < ca->arrayaddSteering.size(); index++)
			fout << ca->arrayaddSteering[index].steering;
		for (int index = 0; index < ca->arrayaddTrunk.size(); index++)
			fout << ca->arrayaddTrunk[index].trunk;
		for (int index = 0; index < ca->arrayYearX.size(); index++)
			fout << ca->arrayYearX[index].year;
		for (int index = 0; index < ca->arrayColors.size(); index++)
			fout << ca->arrayColors[index].colors;
		for (int index = 0; index < ca->arrayPRICE.size(); index++)
			fout << ca->arrayPRICE[index].price;
	}
	fout.close();

	fin.open(path1);
	if (!fin.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;

		while (fin.read((char*)&ca, sizeof(Machine)))
		{
			cout << "Произошла запись в файл!" << endl;
		}

	}
	fin.close();

	fout.open(path2, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;

		for (int index = 0; index < da->arrayaddMark.size(); index++)
			fout << da->arrayaddMark[index].mark;
		for (int index = 0; index < da->arrayaddModel.size(); index++)
			fout << da->arrayaddModel[index].model;
		for (int index = 0; index < da->arrayaddDimensions.size(); index++)
			fout << da->arrayaddDimensions[index].dimensions;
		for (int index = 0; index < da->arrayEngine.size(); index++)
			fout << da->arrayEngine[index].engine;
		for (int index = 0; index < da->arrayEngine_vol.size(); index++)
			fout << da->arrayEngine_vol[index].engine_volume;
		for (int index = 0; index < da->arrayaddFuel.size(); index++)
			fout << da->arrayaddFuel[index].fuel;
		for (int index = 0; index < da->arrayaddOil_lose.size(); index++)
			fout << da->arrayaddOil_lose[index].oil;
		for (int index = 0; index < da->arrayaddSteering.size(); index++)
			fout << da->arrayaddSteering[index].steering;
		for (int index = 0; index < da->arrayaddTrunk.size(); index++)
			fout << da->arrayaddTrunk[index].trunk;
		for (int index = 0; index < da->arrayYearX.size(); index++)
			fout << da->arrayYearX[index].year;
		for (int index = 0; index < da->arrayColors.size(); index++)
			fout << da->arrayColors[index].colors;
		for (int index = 0; index < da->arrayPRICE.size(); index++)
			fout << da->arrayPRICE[index].price;
	}
	fout.close();

	fin.open(path2);
	if (!fin.is_open())
	{
		cout << "Ошибка! Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;

		while (fin.read((char*)&da, sizeof(Machine)))
		{
			cout << "Произошла запись в файл!" << endl;
		}

	}
	fin.close();

	return 0;
}

