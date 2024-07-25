#include "DrawCircle.h"
#include "DrawImage.h"

DrawCircle::DrawCircle()
	: CommandBase()
{
}

DrawCircle::~DrawCircle()
{
}

void DrawCircle::SetPainter(DrawImage* painter)
{
	m_pPainter = painter;
}

void DrawCircle::execute()
{
	if (m_pPainter != nullptr)
	{
		m_pPainter->DrawRound();
	}
}