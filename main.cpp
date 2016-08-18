#include<iostream>
using namespace std;

#include<stack>
#include"b_tree.hpp"
#include"dfs_recursive.hpp"
#include"dfs_non_recursive.hpp"


int main()
{

	tree T;
	dfs_non_recursive(T.head());
	
//	cout<<nodes[5]->val<<endl;
	return 0;
}
