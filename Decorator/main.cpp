#include <iostream>
#include "Colour.h"
#include "Rctangle.h"
#include "Circular.h"

//装饰者模式

int main()
{
	ShapeBase* pCircular = new Circular;
	pCircular->Draw();
	std::cout << std::endl;
	ShapeBase* pRctangle = new Rctangle;
	pRctangle->Draw();
	std::cout << std::endl;

	Colour* pColor = new Colour(pCircular);
	pColor->SetColor("黑色的");
	pColor->Draw();
	std::cout << std::endl;
	delete pColor;
	delete pCircular;

	pColor = new Colour(pRctangle);
	pColor->SetColor("蓝色的");
	pColor->Draw();
	std::cout << std::endl;
	delete pColor;
	delete pRctangle;
	return 0;
}