#include "Colour.h"

Colour::Colour(ShapeBase* pShape)
	:ShapeDecorator(pShape)
{
}

Colour::~Colour()
{
}

void Colour::Draw()
{
	std::cout << m_strColor << "的";
	ShapeDecorator::Draw();
}

void Colour::SetColor(std::string strColor)
{
	m_strColor = strColor;
}
