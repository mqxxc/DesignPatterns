#pragma once
#include "MakeDrink.h"
class MakeTea : public MakeDrink
{
public:
	MakeTea();
	~MakeTea();

protected:
	virtual void AddMaterial() override;
	virtual bool NeedSauce() override;
};