#include "StateBase.h"

StateBase::StateBase(Context* context)
{
	m_pContext = context;
}

StateBase::~StateBase()
{
}

void StateBase::OnStartTime()
{
}

void StateBase::OnStop()
{
}

void StateBase::OnRefresh()
{
}
