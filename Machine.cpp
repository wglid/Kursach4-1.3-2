#include "Machine.h"

void Machine::info()
{
	int i;
	for (i = 0; i < arrayaddMark.size(); ++i)  arrayaddMark[i].info();
	for (i = 0; i < arrayaddModel.size(); ++i)  arrayaddModel[i].info();
	for (i = 0; i < arrayaddDimensions.size(); ++i)  arrayaddDimensions[i].info();
	for (i = 0; i < arrayEngine.size(); ++i)  arrayEngine[i].info();
	for (i = 0; i < arrayEngine_vol.size(); ++i)  arrayEngine_vol[i].info();
	for (i = 0; i < arrayaddFuel.size(); ++i)  arrayaddFuel[i].info();
	for (i = 0; i < arrayaddOil_lose.size(); ++i)  arrayaddOil_lose[i].info();
	for (i = 0; i < arrayaddSteering.size(); ++i)  arrayaddSteering[i].info();
	for (i = 0; i < arrayaddTrunk.size(); ++i)  arrayaddTrunk[i].info();
	for (i = 0; i < arrayYearX.size(); ++i)  arrayYearX[i].info();
	for (i = 0; i < arrayColors.size(); ++i)  arrayColors[i].info();
	for (i = 0; i < arrayPRICE.size(); ++i)  arrayPRICE[i].info();	
}