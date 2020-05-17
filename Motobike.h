#pragma once
#include "MachineBuilder.h"
class Motobike : public MachineBuilder
{
public:
	void createMachine();
	void addPrice();
	void addColors();
	void Engine_type();
	void Engine_volume_type();
	void Year_create();
	void Mark_type();
	void Model_type();
	void Dimensions_type();
	void Fuel_type();
	void Steering_type();
	void Oil_lose_type();
	void Trunk_type();
	
	/*void Save();
	void Load();
	void Edit();*/
};
