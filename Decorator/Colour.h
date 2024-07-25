#pragma once
#include "ShapeDecorator.h"
#include <iostream>

class Colour : public ShapeDecorator
{
public:
	Colour(ShapeBase* pShape);
	~Colour();

	void Draw();
	void SetColor(std::string strColor);

protected:
	std::string m_strColor;
};

