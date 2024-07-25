#pragma once

class ShapeBase;
class ShapeFactory
{
public:
	enum class eShape
	{
		eRectangle = 1,
		eCircular,
		eTriangle
	};
	ShapeFactory();
	~ShapeFactory();
	ShapeBase* CreateShape(eShape shape);
};