#pragma once

class CommandBase
{
public:
	CommandBase();
	virtual ~CommandBase();

	virtual void execute() = 0;
};