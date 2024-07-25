#pragma once
#include "BehaviorBase.h"

//减法行为
class Subtraction : public BehaviorBase
{
public:
	Subtraction();
	~Subtraction();

	int behavior(int a, int b);
};