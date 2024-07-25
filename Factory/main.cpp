#include <iostream>
#include "ShapeFactory.h"
#include "ShapeBase.h"

//工厂模式（简单工厂实现）
int main()
{
	ShapeFactory tfactory;
	ShapeBase* Circular = tfactory.CreateShape(ShapeFactory::eShape::eCircular);
	Circular->Speak();
	std::cout << std::endl;
	ShapeBase* Rectangle = tfactory.CreateShape(ShapeFactory::eShape::eRectangle);
	Rectangle->Speak();
	std::cout << std::endl;
	ShapeBase* Triangle = tfactory.CreateShape(ShapeFactory::eShape::eTriangle);
	Triangle->Speak();
	std::cout << std::endl;
	return 0;
}