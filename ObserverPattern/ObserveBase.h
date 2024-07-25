#pragma once
class Theme;
//订阅者基类
class ObserveBase
{
public:
	ObserveBase();
	~ObserveBase();

	virtual void OnUpdate(int num) = 0;		//获取订阅信息后的处理函数
	virtual void OnUpdate(Theme* pTheme) = 0;
};