#include "Theme2.h"
#include <iostream>

Theme2::Theme2()
{
}

Theme2::~Theme2()
{
}

int Theme2::GetNum()
{
	return m_nNum;
}

void Theme2::OnChangeState(int num)
{
	std::cout << "十进制形式为：" << num << std::endl;
	m_nNum = num;
}