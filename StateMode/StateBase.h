#pragma once

class Context;
class StateBase
{
public:
	StateBase(Context* context);
	virtual ~StateBase();

	virtual void OnStartTime();
	virtual void OnStop();
	virtual void OnRefresh();

protected:
	Context* m_pContext;
};