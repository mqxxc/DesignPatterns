#pragma once
#include <list>

class Theme2;
//订阅者基类
class ObserveBase2
{
public:
	ObserveBase2();
	~ObserveBase2();

	virtual void OnUpdate(int num) = 0;		//获取订阅信息后的处理函数
	void AddTheme(Theme2* theme);
	void RemoveTheme(Theme2* theme);
	void Update(Theme2* theme);

protected:
	std::list<Theme2*> m_listThemes;
};
