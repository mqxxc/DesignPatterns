#include "Theme.h"
#include "ObserveBase.h"
#include <iostream>

Theme::Theme()
{
}

Theme::~Theme()
{
}

void Theme::AddObserve(ObserveBase* pObserve)
{
	m_listObserves.push_back(pObserve);
}

void Theme::DelObserve(ObserveBase* pObserve)
{
	m_listObserves.remove(pObserve);
}

void Theme::OnChangeState(int num)
{
	m_nNum = num;
	if (m_bChange)
	{
		if (m_eType == ePush)
		{
			std::cout << "十进制形式为：" << num << std::endl;
			for (auto it : m_listObserves)
			{
				it->OnUpdate(num);
			}
		}
		else
		{
			std::cout << "十进制形式为：" << num << std::endl;
			for (auto it : m_listObserves)
			{
				it->OnUpdate(this);
			}
		}
	}
}