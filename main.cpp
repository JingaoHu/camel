#include<iostream>
#include<stack>
#include"../b_tree.hpp"
#include"../dfs_recursive.hpp"

using namespace std;


int main()
{

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
	tree T
	dfs_recursive(T.head());
//	cout<<nodes[5]->val<<endl;
	return 0;
}
