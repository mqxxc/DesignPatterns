#include "ShapeFactory.h"
#include "Rectangle.h"
#include "Circular.h"
#include "Triangle.h"

ShapeFactory::ShapeFactory()
{
}

ShapeFactory::~ShapeFactory()
{
}

ShapeBase* ShapeFactory::CreateShape(eShape shape)
{
	switch (shape)
	{
	case eShape::eRectangle:
	{
		return new Rectangle;
	}break;
	case eShape::eCircular:
	{
		return new Circular;
	}break;
	case eShape::eTriangle:
	{
		return new Triangle;
	}break;
	}
	return nullptr;
}
