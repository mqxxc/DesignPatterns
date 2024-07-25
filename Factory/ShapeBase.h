#pragma once
class ShapeBase
{
public:
	ShapeBase();
	~ShapeBase();

	virtual void Speak() = 0;
};