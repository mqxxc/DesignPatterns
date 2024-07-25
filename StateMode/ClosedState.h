#pragma once
#include "StateBase.h"

class ClosedState : public StateBase
{
public:
	ClosedState(Context* context);
	~ClosedState();

	void OnStartTime();
	void OnStop();
	void OnRefresh();
};