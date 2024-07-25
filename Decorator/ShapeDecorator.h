#pragma once
#include "ShapeBase.h"
class ShapeDecorator : public ShapeBase
{
public:
	ShapeDecorator(ShapeBase* pShape);
	virtual ~ShapeDecorator();

	virtual void Draw();
	void SetShape(ShapeBase* pShape);
protected:
	ShapeBase* m_pShape = nullptr;
};