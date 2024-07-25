#include "MakeTea.h"
#include <iostream>

MakeTea::MakeTea()
{
}

MakeTea::~MakeTea()
{
}

void MakeTea::AddMaterial()
{
	std::cout << "添加一些茶叶" << std::endl;
}

bool MakeTea::NeedSauce()
{
	return false;
}
