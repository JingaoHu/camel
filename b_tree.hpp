#ifndef B_TREE
#define B_TREE

struct tree_node
{
	int val;
	bool state;
	tree_node* l_child;
	tree_node* r_child;
};

#endif
