#include "Entity.h"

Entity::Entity()
{
}

Entity::~Entity()
{
	if (m_pBehavior != nullptr)
	{
		delete m_pBehavior;
		m_pBehavior = nullptr;
	}
}

int Entity::UseBehavopr(int a, int b)
{
	if (m_pBehavior != nullptr)
	{
		return m_pBehavior->behavior(a, b);
	}
	return 0;
}

void Entity::SetBehavopr(BehaviorBase* pBehavior)
{
	if (m_pBehavior != nullptr)
	{
		delete m_pBehavior;
		m_pBehavior = nullptr;
	}
	pBehavior = m_pBehavior;
}