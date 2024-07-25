#pragma once
#include "ObserveBase.h"

class HexObserver : public ObserveBase
{
public:
	HexObserver();
	~HexObserver();

	void OnUpdate(int num) override;
	void OnUpdate(Theme* pTheme) override;
};