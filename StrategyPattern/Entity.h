#pragma once
#include "BehaviorBase.h"

//实体
class Entity
{
public:
	Entity();
	~Entity();

	int UseBehavopr(int a, int b);
	void SetBehavopr(BehaviorBase* pBehavior);

protected:
	BehaviorBase* m_pBehavior = nullptr;
};