#pragma once
#include <string>

class IeratorsBase;
class Node
{
public:
	Node();
	virtual ~Node();

	virtual void Print(std::string strPrefix);
	virtual void Print();
	virtual void Remove(Node* node);
	virtual void AddChilds(Node* node);
	virtual Node* GetChild(int nIter);
	virtual void SetValue(std::string strValue);

protected:
	std::string m_nValue;
};