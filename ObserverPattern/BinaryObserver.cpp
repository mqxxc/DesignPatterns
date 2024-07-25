#include "BinaryObserver.h"
#include "Theme.h"

#include <iostream>
#include <string>

BinaryObserver::BinaryObserver()
	:ObserveBase()
{
}

BinaryObserver::~BinaryObserver()
{
}

void BinaryObserver::OnUpdate(int num)
{
	std::string str;
	while (num > 0)
	{
		str.insert(0, std::to_string(num % 2));
		num /= 2;
	}
	std::cout << "二进制形式为" << str << std::endl;
}

void BinaryObserver::OnUpdate(Theme* pTheme)
{
	std::string str;
	int num = pTheme->GetNum();
		while (num > 0)
		{
			str.insert(0, std::to_string(num % 2));
			num /= 2;
		}
	std::cout << "二进制形式为" << str << std::endl;
}