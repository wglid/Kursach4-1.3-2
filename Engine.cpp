#include "Engine.h"
//���������
void Engine::info()
{
	cout << "Engine: " << engine << endl;
}

Engine::Engine()
{
	cout << "������� ��� ���������: ";
	cin >> engine;
	cout << "�������� ������� �������!" << endl << endl;
}

Engine::Engine(string line)
{
	engine = line;
}
