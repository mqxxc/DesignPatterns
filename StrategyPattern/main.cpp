#include <iostream>
#include "Entity.h"
#include "Addition.h"
#include "Subtraction.h"

//策略模式
int main()
{
	Entity test;
	test.SetBehavopr(new Addition());
	std::cout << test.UseBehavopr(10, 70) << std::endl;

	test.SetBehavopr(new Subtraction());
	std::cout << test.UseBehavopr(10, 70) << std::endl;
	return 0;
}