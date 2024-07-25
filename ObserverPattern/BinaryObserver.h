#pragma once
#include "ObserveBase.h"

class BinaryObserver : public ObserveBase
{
public:
	BinaryObserver();
	~BinaryObserver();

	void OnUpdate(int num) override;
	void OnUpdate(Theme* pTheme) override;
};