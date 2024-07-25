#include "DrawImage.h"
#include "Adapter.h"
//适配器模式(对象适配器)
int main()
{
	DrawImage painter;
	Adapter adpter(&painter);
	adpter.Draw();
	return 0;
}