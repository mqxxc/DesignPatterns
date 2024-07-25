#pragma once

class Theme2
{
public:
	Theme2();
	~Theme2();
	int GetNum();
	void OnChangeState(int num);

protected:
	int m_nNum = 0;
};