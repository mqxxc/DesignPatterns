#pragma once
//行为基类

class BehaviorBase
{
public:
	BehaviorBase();
	~BehaviorBase();

	virtual int behavior(int a,int b) = 0;
};