#include "MakeDrink.h"
#include <iostream>

MakeDrink::MakeDrink()
{
}

MakeDrink::~MakeDrink()
{
}

void MakeDrink::Make()
{
	PlacingVehicles();
	AddMaterial();
	AddBoilingWater();
	if (NeedSauce())
	{
		AddSauce();
	}
}

bool MakeDrink::NeedSauce()
{
	return true;
}

void MakeDrink::PlacingVehicles()
{
	std::cout << "放置一个空杯子" << std::endl;
}

void MakeDrink::AddMaterial()
{
}

void MakeDrink::AddBoilingWater()
{
	std::cout << "往杯中倒入开水" << std::endl;
}

void MakeDrink::AddSauce()
{
}