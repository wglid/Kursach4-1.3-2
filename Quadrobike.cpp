#include "Quadrobike.h"
#include "fstream"
#include "Director.h"
#include "string"
#include "iostream"

string path2 = "Quadrobike.txt";

void Quadrobike::createMachine()
{
	p = new Machine;
}
void Quadrobike::addPrice()
{
	p->arrayPRICE.push_back(PRICE());

}
void Quadrobike::addColors()
{
	p->arrayColors.push_back(Colors());

}
void Quadrobike::Engine_type()
{
	p->arrayEngine.push_back(Engine());

}
void Quadrobike::Engine_volume_type()
{
	p->arrayEngine_vol.push_back(Engine_volume());

}
void Quadrobike::Year_create()
{
	p->arrayYearX.push_back(Year());

}
void Quadrobike::Mark_type()
{
	p->arrayaddMark.push_back(Mark());

}
void Quadrobike::Model_type()
{
	p->arrayaddModel.push_back(Model());

}
void Quadrobike::Dimensions_type()
{
	p->arrayaddDimensions.push_back(Dimensions());

}
void Quadrobike::Fuel_type()
{
	p->arrayaddFuel.push_back(Fuel());

}
void Quadrobike::Steering_type()
{
	p->arrayaddSteering.push_back(Steering());

}
void Quadrobike::Trunk_type()
{
	p->arrayaddTrunk.push_back(Trunk());
}
void Quadrobike::Oil_lose_type()
{
	p->arrayaddOil_lose.push_back(Oil_lose());

}
