#include "DrawImage.h"
#include <iostream>

DrawImage::DrawImage()
{
}

DrawImage::~DrawImage()
{
}

void DrawImage::DrawRound()
{
	std::cout << "绘制了一个圆" << std::endl;
}

void DrawImage::DrawRectangle()
{
	std::cout << "绘制了一个矩形" << std::endl;
}
