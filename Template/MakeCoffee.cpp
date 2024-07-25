#include "MakeCoffee.h"
#include <iostream>

MakeCoffee::MakeCoffee()
{
}

MakeCoffee::~MakeCoffee()
{
}

bool MakeCoffee::NeedSauce()
{
	std::cout << "请问你需要牛奶吗？1-OK,2_NO" << std::endl;
	char temp = getchar();
	return temp == '1';
}

void MakeCoffee::AddMaterial()
{
	std::cout << "添加咖啡粉" << std::endl;
}

void MakeCoffee::AddSauce()
{
	std::cout << "添加牛奶" << std::endl;
}
