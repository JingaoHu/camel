#ifndef BFS
#define BFS
#include<queue>

void bfs(tree_node* head)
{
	if (head==NULL)
		return ;
	queue<tree_node*>q; //////////// queue.front(),queue.back(),queue.push(),queue.pop(),q.empty()
	q.push(head);
	while(!q.empty())
	{
		if(q.front()->l_child!=NULL)
			q.push(q.front()->l_child);

		if(q.front()->r_child!=NULL)
			q.push(q.front()->r_child);
		cout<<q.front()->val<<endl;
		q.pop();
	}
}

#endif
