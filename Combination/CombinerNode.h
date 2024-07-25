#pragma once
#include "Node.h"
#include <list>
class CombinerNode : public Node
{
public:
	CombinerNode();
	~CombinerNode();

	void AddChilds(Node* node) override;
	void Print(std::string strPrefix) override;
	void Print() override;
	Node* GetChild(int nIter) override;
	void Remove(Node* node) override;

protected:
	std::list<Node*> m_listChilds;
	std::string m_strPrefix;
};