#include "ObserveBase2.h"
#include "Theme2.h"

ObserveBase2::ObserveBase2()
{
}

ObserveBase2::~ObserveBase2()
{
}

void ObserveBase2::AddTheme(Theme2* theme)
{
	m_listThemes.push_back(theme);
}

void ObserveBase2::RemoveTheme(Theme2* theme)
{
	m_listThemes.remove(theme);
}

void ObserveBase2::Update(Theme2* theme)
{
	if()
}
