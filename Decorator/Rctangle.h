#pragma once
#include "ShapeBase.h"

class Rctangle : public ShapeBase
{
public:
	Rctangle();
	~Rctangle();

	void Draw() override;
};