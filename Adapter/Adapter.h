#pragma once

class DrawImage;

class Adapter
{
public:
	Adapter(DrawImage* painter = nullptr);
	~Adapter();

	void Draw();

private:
	DrawImage* m_pPainter = nullptr;
};