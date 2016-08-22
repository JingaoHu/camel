#include<iostream>
using namespace std;

#include<stack>
#include"b_tree.hpp"
#include"dfs_recursive.hpp"
#include"dfs_non_recursive.hpp"
#include"gen_list.hpp"
#include"bubble_sort.hpp"
#include"merge_sort.hpp"
#include"quick_sort.hpp"
int main(int argc,char *argv[])
{
	int len;
	len=atoi(argv[1]);
	int a[len];
/*
	cout<<"bubble sorting..."<<endl;
	srand(0);
	gen_list(a,len,0,100000);
	bubble_sort(a,len);
	cout<<"done!"<<endl;
*/
	cout<<"quick sorting..."<<endl;
	srand(0);
	gen_list(a,len,0,100000);
	quick_sort(a,0,len-1);
	cout<<"quick sort done!"<<endl;

	cout<<"merge sorting..."<<endl;
	srand(0);
	gen_list(a,len,0,100000);
	merge_sort(a,0,len-1);
	cout<<"merge sort done!"<<endl;

	return 0;
}
