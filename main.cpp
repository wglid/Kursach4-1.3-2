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