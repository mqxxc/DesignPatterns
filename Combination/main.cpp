#include "CombinerNode.h"
#include "LeafNode.h"

//组合模式

Node* CreateTree()
{
	Node* rootNode = new CombinerNode;

	Node* folder = new CombinerNode();
	folder->SetValue("Starward_Portable_0.11.0_x64");
	Node* temp = new CombinerNode;
	temp->SetValue("bg");
	folder->AddChilds(temp);
	temp = new CombinerNode;
	temp->SetValue("Starward");
	folder->AddChilds(temp);
	temp = new LeafNode;
	temp->SetValue("StarwardDatabase.db");
	folder->AddChilds(temp);
	rootNode->AddChilds(folder);

	folder = new CombinerNode();
	folder->SetValue("仓库一般文件夹分布");
	temp = new CombinerNode;
	temp->SetValue("assets");
	folder->AddChilds(temp);
	temp = new CombinerNode;
	temp->SetValue("src");
	folder->AddChilds(temp);
	temp = new LeafNode;
	temp->SetValue("LICENSE.txt");
	folder->AddChilds(temp);
	rootNode->AddChilds(folder);

	return rootNode;
}

int main()
{
	Node* rootNode = CreateTree();
	rootNode->Print("");

	return 0;
}