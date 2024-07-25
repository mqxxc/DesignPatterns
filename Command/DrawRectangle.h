#pragma once
#include "CommandBase.h"

class DrawImage;
class DrawRectangle : public CommandBase
{
public:
	DrawRectangle();
	~DrawRectangle();
	void SetPainter(DrawImage* painter);

	void execute();

private:
	DrawImage* m_pPainter = nullptr;
};

