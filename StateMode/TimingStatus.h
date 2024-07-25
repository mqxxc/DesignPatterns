#pragma once
#include "StateBase.h"

class TimingStatus : public StateBase
{
public:
	TimingStatus(Context* context);
	~TimingStatus();

	void OnStartTime();
	void OnStop();
	void OnRefresh();
};