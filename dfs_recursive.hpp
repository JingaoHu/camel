#ifndef DFS_RECURSIVE
#define DFS_RECURSIVE

void dfs_recursive(tree_node* head)
{
	if(head==NULL)
		return ;
	
	dfs(head->l_child);
	dfs(head->r_child);

	cout<<head->val<<endl;
	return ;
}

#endif
