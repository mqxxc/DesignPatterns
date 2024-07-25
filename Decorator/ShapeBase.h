#pragma once

class ShapeBase
{
public:
	ShapeBase();
	virtual ~ShapeBase();

	virtual void Draw() = 0;
};