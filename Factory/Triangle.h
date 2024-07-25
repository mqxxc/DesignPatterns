#pragma once
#include "ShapeBase.h"
class Triangle : public ShapeBase
{
public:
	Triangle();
	~Triangle();
	void Speak() override;
};