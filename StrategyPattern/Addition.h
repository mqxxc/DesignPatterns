#pragma once
#include "BehaviorBase.h"

//加法行为
class Addition : public BehaviorBase
{
public:
	Addition();
	~Addition();

	int behavior(int a, int b);
};