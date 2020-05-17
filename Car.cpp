#include "Car.h"
#include "fstream"
#include "Director.h"
#include "string"
#include "iostream"
#include <iomanip>

using namespace std;

void Car::createMachine()
{
	p = new Machine;
}
void Car::Mark_type()
{
	p->arrayaddMark.push_back(Mark());
}
void Car::Dimensions_type()
{
	p->arrayaddDimensions.push_back(Dimensions());
}
void Car::Engine_type()
{
	p->arrayEngine.push_back(Engine());
}
void Car::Engine_volume_type()
{
	p->arrayEngine_vol.push_back(Engine_volume());
}
void Car::Fuel_type()
{
	p->arrayaddFuel.push_back(Fuel());
}
void Car::Oil_lose_type()
{
	p->arrayaddOil_lose.push_back(Oil_lose());
}
void Car::Steering_type()
{
	p->arrayaddSteering.push_back(Steering());
}
void Car::Trunk_type()
{
	p->arrayaddTrunk.push_back(Trunk());
}
void Car::Model_type()
{
	p->arrayaddModel.push_back(Model());
}
void Car::Year_create()
{
	p->arrayYearX.push_back(Year());
}
void Car::addColors()
{
	p->arrayColors.push_back(Colors());
}
void Car::addPrice()
{
	p->arrayPRICE.push_back(PRICE());
}

