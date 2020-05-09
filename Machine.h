#pragma once
#include "Colors.h"
#include "PRICE.h"
#include "Engine.h"
#include "Engine_volume.h"
#include "Year.h"
#include "Mark.h"
#include "Model.h"
#include "Dimensions.h"
#include "Fuel.h"
#include "Steering.h"
#include "Oil_lose.h"
#include "Trunk.h"


class Machine
{
public:
	vector<Colors> arrayColors;
	vector<PRICE> arrayPRICE;
	vector<Engine> arrayEngine;
	vector<Engine_volume> arrayEngine_vol;
	vector<Year> arrayYearX;
	vector<Mark> arrayaddMark;
	vector<Model> arrayaddModel;
	vector<Dimensions> arrayaddDimensions;
	vector<Fuel> arrayaddFuel;
	vector<Steering> arrayaddSteering;
	vector<Oil_lose> arrayaddOil_lose;
	vector<Trunk> arrayaddTrunk;
	//Парамерты для любой машины
	void info();
};
