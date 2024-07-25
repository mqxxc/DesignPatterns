#include "PaintingEasel.h"
#include "DrawCircular.h"
#include "DrawRectangle.h"

#include <iostream>

PaintingEasel::PaintingEasel()
{
}

PaintingEasel::~PaintingEasel()
{
}

void PaintingEasel::DrawShape()
{
	std::cout << "创建了一个绘画板" << std::endl;
	DrawCircular circular;
	circular.Draw();
	DrawRectangle rectangle;
	rectangle.Draw();
}
