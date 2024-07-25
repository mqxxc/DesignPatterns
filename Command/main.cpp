#include <iostream>
#include "CommandSet.h"
#include "DrawCircle.h"
#include "DrawRectangle.h"
#include "DrawImage.h"

//命令模式

int main()
{
	CommandSet set;
	DrawImage painter;
	DrawCircle circle;
	DrawRectangle rect;

	circle.SetPainter(&painter);
	rect.SetPainter(&painter);

	set.Append(&circle);
	set.Append(&rect);
	set.Place();

	return 0;
}