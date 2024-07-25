#pragma once
#include "ObserveBase.h"

class HexObserver2 : public ObserveBase
{
public:
	HexObserver2();
	~HexObserver2();

	void OnUpdate(int num) override;
};