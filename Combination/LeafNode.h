#pragma once
#include "Node.h"
class LeafNode : public Node
{
public:
	LeafNode();
	~LeafNode();

	void Print(std::string strPrefix) override;
	void Print() override;
};