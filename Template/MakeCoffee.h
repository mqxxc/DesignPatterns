#pragma once
#include "MakeDrink.h"
class MakeCoffee : public MakeDrink
{
public:
	MakeCoffee();
	~MakeCoffee();

protected:
	virtual bool NeedSauce() override;		
	virtual void AddMaterial() override;
	virtual void AddSauce() override;
};