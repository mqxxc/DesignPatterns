#include "ShapeDecorator.h"

ShapeDecorator::ShapeDecorator(ShapeBase* pShape)
{
	m_pShape = pShape;
}

ShapeDecorator::~ShapeDecorator()
{
}

void ShapeDecorator::Draw()
{
	if (m_pShape != nullptr)
	{
		m_pShape->Draw();
	}
}

void ShapeDecorator::SetShape(ShapeBase* pShape)
{
	m_pShape = pShape;
}
