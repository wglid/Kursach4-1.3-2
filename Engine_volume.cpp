#include "Engine_volume.h"
//����� ���������
void Engine_volume::info()
{
	cout << "Engine volume: " << engine_volume << endl;
}

Engine_volume::Engine_volume()
{
	cout << "������� ����� ���������: ";
	cin >> engine_volume;
	cout << "����� ��������� ������� ������!" << endl << endl;
}

Engine_volume::Engine_volume(string line)
{
	engine_volume = line;
}
