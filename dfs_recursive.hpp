#ifndef DFS_RECURSIVE
#define DFS_RECURSIVE

void dfs_recursive(tree_node* head)
{
	if(head==NULL)
		return ;
	
	dfs_recursive(head->l_child);
	dfs_recursive(head->r_child);

	cout<<head->val<<endl;
	return ;
}

#endif
