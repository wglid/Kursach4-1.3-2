#pragma once
#include "MachineBuilder.h"

class Director
{

public:
	Machine* createMachine(MachineBuilder& builder)
	{
		builder.createMachine();
		builder.Mark_type();
		builder.Model_type();
		builder.Dimensions_type();
		builder.Engine_type();
		builder.Engine_volume_type();
		builder.Fuel_type();
		builder.Oil_lose_type();
		builder.Steering_type();
		builder.Trunk_type();
		builder.Year_create();
		builder.addColors();
		builder.addPrice();
		return(builder.getMachine());
	}
};

