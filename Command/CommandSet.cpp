#include "CommandSet.h"
#include "CommandBase.h"

CommandSet::CommandSet()
{
}

CommandSet::~CommandSet()
{
}

void CommandSet::Append(CommandBase* command)
{
	m_CommandList.push_back(command);
}

void CommandSet::Place()
{
	for (auto it : m_CommandList)
	{
		it->execute();
	}
	m_CommandList.clear();
}
