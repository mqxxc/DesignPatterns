#include "DrawImage.h"
#include <iostream>

DrawImage::DrawImage()
{
}

DrawImage::~DrawImage()
{
}

void DrawImage::DrawImg(std::string shape)
{
	std::cout << "绘制了一个" << shape << std::endl;
}