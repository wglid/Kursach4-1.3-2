#pragma once
#include "Machine.h"


class MachineBuilder
{
protected:
	Machine* p;
public:
	MachineBuilder() : p(0) {}
	virtual ~MachineBuilder() {}
	virtual void createMachine() {}
	virtual void addPrice() {}
	virtual void addColors() {}
	virtual void Engine_type() {}
	virtual void Engine_volume_type() {}
	virtual void Year_create() {}
	virtual void Mark_type() {}
	virtual void Model_type() {}
	virtual void Dimensions_type() {}
	virtual void Fuel_type() {}
	virtual void Steering_type() {}
	virtual void Oil_lose_type() {}
	virtual void Trunk_type() {}

	//virtual void Delete() = 0;
	//Метод для каждого параметра
	virtual Machine* getMachine() { return p; }
};