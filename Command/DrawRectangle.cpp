#include "DrawRectangle.h"
#include "DrawImage.h"

DrawRectangle::DrawRectangle()
	: CommandBase()
{
}

DrawRectangle::~DrawRectangle()
{
}


void DrawRectangle::SetPainter(DrawImage* painter)
{
	m_pPainter = painter;
}

void DrawRectangle::execute()
{
	if (m_pPainter != nullptr)
	{
		m_pPainter->DrawRectangle();
	}
}
