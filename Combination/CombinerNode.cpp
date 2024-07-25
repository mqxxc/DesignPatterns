#include "CombinerNode.h"
#include <iostream>

CombinerNode::CombinerNode()
	: Node()
{
}

CombinerNode::~CombinerNode()
{
	for (auto it : m_listChilds)
	{
		delete it;
	}
}

void CombinerNode::AddChilds(Node* node)
{
	m_listChilds.push_back(node);
}

void CombinerNode::Print(std::string strPrefix)
{
	std::cout << strPrefix << m_nValue << std::endl;
	m_strPrefix += strPrefix + " ";
	for (auto it : m_listChilds)
	{
		it->Print(m_strPrefix);
	}
}

void CombinerNode::Print()
{
	std::cout << m_nValue << std::endl;
}

Node* CombinerNode::GetChild(int nIter)
{
	if (nIter < m_listChilds.size())
	{
		auto it = m_listChilds.begin();
		for (int i = 0; i < nIter; ++i)
		{
			++it;
		}
		return *it;
	}
	return nullptr;
}

void CombinerNode::Remove(Node* node)
{
	m_listChilds.remove(node);
}