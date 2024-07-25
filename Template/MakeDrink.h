#pragma once
class MakeDrink
{
public:
	MakeDrink();
	~MakeDrink();

	virtual void Make()final;

protected:
	virtual bool NeedSauce();		//钩子函数，子类可以重载来一定程度上影响流程内的行为
	virtual void PlacingVehicles();
	virtual void AddMaterial();
	virtual void AddBoilingWater();
	virtual void AddSauce();
};