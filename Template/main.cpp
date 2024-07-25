#include "MakeCoffee.h"
#include "MakeTea.h"

#include <iostream>

//模版模式
int main()
{
	MakeDrink* coffee = new MakeCoffee;
	MakeDrink* tea = new MakeTea;

	coffee->Make();

	std::cout << std::endl;
	tea->Make();
	return 0;
}