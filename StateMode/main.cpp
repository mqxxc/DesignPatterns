#include "Context.h"

//状态模式

int main()
{
	Context context;

	context.OnStop();
	context.OnStartTime();
	context.OnRefresh();

	return 0;
}