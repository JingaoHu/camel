#ifndef DFS_NON_RECURSIVE
#define DFS_NON_RECURSIVE
#include<stack>

void dfs_non_recursive(tree_node* head)
{
	if (head==NULL)
		return ;
	stack<tree_node*>s;
	s.push(head);
	while(s.empty()!=true)
	{
		/////////////////////////  root last   ///////////////////////////////////
		/*	
		if (s.top()->l_child!=NULL&&s.top()->l_child->state==false )
			s.push(s.top()->l_child);
		else if (s.top()->r_child!=NULL&&s.top()->r_child->state==false)
			s.push(s.top()->r_child);
		else 
		{	
			cout<<s.top()->val<<endl;
			s.top()->state=true;
			s.pop();
		}
		*/
		////////////////////////  root first  ////////////////////////////////////
		/*
		if (s.top()->l_child!=NULL&&s.top()->l_child->state==false )
		{
			s.push(s.top()->l_child);
			cout<<s.top()->val<<endl;
		}
		else if (s.top()->r_child!=NULL&&s.top()->r_child->state==false)
		{
			s.push(s.top()->r_child);
			cout<<s.top()->val<<endl;
		}
		else 
		{	
			s.top()->state=true;
			s.pop();
		}
		*/
		////////////////////////  root middle  ////////////////////////////////////
		if (s.top()->l_child!=NULL&&s.top()->l_child->state==false )
		{
	
			s.push(s.top()->l_child);
			
		}
		else if (s.top()->r_child!=NULL&&s.top()->r_child->state==false)
		{
			cout<<s.top()->val<<endl;
			s.push(s.top()->r_child);
		}
		else 
		{	
			if (s.top()->l_child==NULL || s.top()->r_child==NULL)
				cout<<s.top()->val<<endl;
			s.top()->state=true;
			s.pop();
		}
		
	}
}

#endif
