#ifndef B_TREE
#define B_TREE

struct tree_node
{
	int val;
	bool state;
	tree_node* l_child;
	tree_node* r_child;
};

class tree
{
public:
	tree()
	{
		for (int i=0;i<6;i++)
		{
		// attention,do not lose this line , othetwise there will be segment fault but no compilation error
		nodes[i]=new tree_node(); 
		
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
	}
	
	tree_node* head()
	{
		return nodes[0];
	}
private:
tree_node* nodes[6];
	
}
#endif
