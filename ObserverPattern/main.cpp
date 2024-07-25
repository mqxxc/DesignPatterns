#include <iostream>
#include "Theme.h"
#include "BinaryObserver.h"
#include "HexObserver.h"

//观察者模式

void OnPush()
{//推的方式
	Theme theme;
	BinaryObserver observer1;
	theme.AddObserve(&observer1);
	HexObserver observerl;
	theme.AddObserve(&observerl);

	theme.SetChanged();
	theme.OnChangeState(32);
}

void OnPull()
{
	Theme theme;
	theme.SetType(Theme::ePull);
	BinaryObserver observer1;
	theme.AddObserve(&observer1);
	HexObserver observerl;
	theme.AddObserve(&observerl);

	theme.SetChanged();
	theme.OnChangeState(32);
}

int main()
{
	OnPush();

	OnPull();

	return 0;
}