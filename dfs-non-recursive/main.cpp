#include<iostream>
#include<stack>
#include"../b_tree.hpp"

using namespace std;

void dfs(tree_node* head)
{
	if(head==NULL)
		return ;
	
	dfs(head->l_child);
	dfs(head->r_child);

	cout<<head->val<<endl;
	return ;
}
int main()
{
///////////////////////  init t
	tree_node* nodes[6];
	for (int i=0;i<6;i++)
	{
		nodes[i]->val=i;
		nodes[i]->state=false;
	}

	nodes[0]->l_child=nodes[1];
	nodes[0]->r_child=nodes[2];
	nodes[1]->l_child=nodes[3];
	nodes[1]->r_child=nodes[4];
	nodes[2]->l_child=nodes[5];
	nodes[2]->r_child=NULL;
	nodes[3]->l_child=NULL;
	nodes[3]->r_child=NULL;
	nodes[4]->l_child=NULL;
	nodes[4]->r_child=NULL;
	nodes[5]->l_child=NULL;
	nodes[5]->r_child=NULL;
	
/*
	stack<tree_node*>s;
	s.push(nodes[1]);
	while(s.empty()!=true)
	{
		if (s.top()->l_child!=NULL && s.top()->l_child->state==false) 
			s.push(s.top()->l_child);
		else if (s.top()->r_child!=NULL && s.top()->r_child->state==false)
			s.push(s.top()->r_child);
		else 
		{	
			cout<<s.top()->val<<endl;
			s.top()->state=true;
			s.pop();
		}
	}
*/
//	dfs(nodes[5]);
	cout<<nodes[5]->val<<endl;
	return 0;
}
