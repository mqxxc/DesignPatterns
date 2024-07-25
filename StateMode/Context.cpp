#include "Context.h"
#include "TimingStatus.h"
#include "ClosedState.h"

Context::Context()
{
	
	m_pTimingStatus = new TimingStatus(this);
	m_pClosedState  = new ClosedState(this);

	m_pCurrState = m_pClosedState;
}

Context::~Context()
{
	delete m_pTimingStatus;
	delete m_pClosedState;
}

void Context::OnStartTime()
{
	m_pCurrState->OnStartTime();
}

void Context::OnStop()
{
	m_pCurrState->OnStop();
}

void Context::OnRefresh()
{
	m_pCurrState->OnRefresh();
}

void Context::SetState(StateBase* state)
{
	m_pCurrState = state;
}

StateBase* Context::GetTimingStatus()
{
	return m_pTimingStatus;
}

StateBase* Context::GetClosedState()
{
	return m_pClosedState;
}
