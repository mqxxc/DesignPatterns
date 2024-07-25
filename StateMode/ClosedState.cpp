#include "ClosedState.h"
#include "Context.h"

#include <iostream>

ClosedState::ClosedState(Context* context)
	: StateBase(context)
{
}

ClosedState::~ClosedState()
{
}

void ClosedState::OnStartTime()
{
	std::cout << "已经开始计时了" << std::endl;
	m_pContext->SetState(m_pContext->GetTimingStatus());
}

void ClosedState::OnStop()
{
	std::cout << "计时尚未开始，无需终止" << std::endl;
}

void ClosedState::OnRefresh()
{
	std::cout << "计时尚未开始，无需重置" << std::endl;
}