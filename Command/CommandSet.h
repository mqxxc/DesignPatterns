#pragma once
#include <list>

class CommandBase;
class CommandSet
{
public:
	CommandSet();
	~CommandSet();
	void Append(CommandBase* command);

	void Place();

private:
	std::list<CommandBase*> m_CommandList;
};