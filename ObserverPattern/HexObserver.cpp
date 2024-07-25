#include "HexObserver.h"
#include "Theme.h"

#include <iostream>
#include <string>

HexObserver::HexObserver()
	:ObserveBase()
{
}

HexObserver::~HexObserver()
{
}

void HexObserver::OnUpdate(int num)
{
	std::string str;
	while (num > 0)
	{
		int temp = num % 16;
		if (temp < 10)
		{
			str.insert(0, std::to_string(temp));
		}
		else
		{
			str.insert(0, std::string(1, 'A' + (temp - 10)));
		}
		
		num /= 16;
	}
	std::cout << "十六进制形式为" << str << std::endl;
}

void HexObserver::OnUpdate(Theme* pTheme)
{
	std::string str;
	int num = pTheme->GetNum();
	while (num > 0)
	{
		int temp = num % 16;
		if (temp < 10)
		{
			str.insert(0, std::to_string(temp));
		}
		else
		{
			str.insert(0, std::string(1, 'A' + (temp - 10)));
		}

		num /= 16;
	}
	std::cout << "十六进制形式为" << str << std::endl;
}
