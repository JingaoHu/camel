#ifndef DFS_RECURSIVE
#define DFS_RECURSIVE

void dfs_recursive(tree_node* head)
{
	if(head==NULL)
		return ;
	
	dfs_recursive(head->l_child);
	cout<<head->val<<endl;
	dfs_recursive(head->r_child);

	
	return ;
}

#endif
