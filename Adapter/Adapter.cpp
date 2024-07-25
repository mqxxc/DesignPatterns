#include "Adapter.h"
#include <string>
#include "DrawImage.h"

Adapter::Adapter(DrawImage* painter)
{
	m_pPainter = painter;
}

Adapter::~Adapter()
{
}

void Adapter::Draw()
{
	if (m_pPainter != nullptr)
	{
		m_pPainter->DrawImg("circular");
	}
}
