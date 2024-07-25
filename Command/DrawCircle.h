#pragma once
#include "CommandBase.h"

class DrawImage;
class DrawCircle : public CommandBase
{
public:
	DrawCircle();
	~DrawCircle();
	void SetPainter(DrawImage* painter);

	void execute();

private:
	DrawImage* m_pPainter = nullptr;
};