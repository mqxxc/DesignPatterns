#pragma once
#include "ShapeBase.h"
class Rectangle : public ShapeBase
{
public:
	Rectangle();
	~Rectangle();

	void Speak() override;
};