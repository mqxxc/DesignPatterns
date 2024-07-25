#include "LeafNode.h"
#include <iostream>

LeafNode::LeafNode()
	: Node()
{
}

LeafNode::~LeafNode()
{
}

void LeafNode::Print(std::string strPrefix)
{
	std::cout << strPrefix << m_nValue << std::endl;
}

void LeafNode::Print()
{
	std::cout << m_nValue << std::endl;
}