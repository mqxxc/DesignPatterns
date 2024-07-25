#pragma once

class TimingStatus;
class ClosedState;
class StateBase;
class Context
{
public:
	Context();
	~Context();

	void OnStartTime();
	void OnStop();
	void OnRefresh();


private:
	friend class TimingStatus;
	friend class ClosedState;
	void SetState(StateBase* state);
	StateBase* GetTimingStatus();
	StateBase* GetClosedState();

	StateBase* m_pCurrState = nullptr;
	StateBase* m_pTimingStatus;
	StateBase* m_pClosedState;
};