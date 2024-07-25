#include "TimingStatus.h"
#include "Context.h"

#include <iostream>

TimingStatus::TimingStatus(Context* context)
	:StateBase(context)
{
}

TimingStatus::~TimingStatus()
{
}

void TimingStatus::OnStartTime()
{
	std::cout << "已经在计时了，请勿重新开启" << std::endl;
}

void TimingStatus::OnStop()
{
	std::cout << "计时已停止" << std::endl;
	m_pContext->SetState(m_pContext->GetTimingStatus());
}

void TimingStatus::OnRefresh()
{
	std::cout << "计时已重新开始" << std::endl;
}