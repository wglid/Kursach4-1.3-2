#include "Motobike.h"

void Motobike::createMachine()
{
	p = new Machine;
}

void Motobike::addPrice()
{
	p->arrayPRICE.push_back(PRICE());
	
}
void Motobike::addColors()
{
	p->arrayColors.push_back(Colors());
}
void Motobike::Engine_type()
{
	p->arrayEngine.push_back(Engine());
}
void Motobike::Engine_volume_type()
{
	p->arrayEngine_vol.push_back(Engine_volume());

}
void Motobike::Year_create()
{
	p->arrayYearX.push_back(Year());

}
void Motobike::Mark_type()
{
	p->arrayaddMark.push_back(Mark());

}
void Motobike::Model_type()
{
	p->arrayaddModel.push_back(Model());

}
void Motobike::Dimensions_type()
{
	p->arrayaddDimensions.push_back(Dimensions());

}
void Motobike::Fuel_type()
{
	p->arrayaddFuel.push_back(Fuel());

}
void Motobike::Steering_type()
{
	p->arrayaddSteering.push_back(Steering());

}
void Motobike::Trunk_type()
{
	p->arrayaddTrunk.push_back(Trunk());
}
void Motobike::Oil_lose_type()
{
	p->arrayaddOil_lose.push_back(Oil_lose());

}
