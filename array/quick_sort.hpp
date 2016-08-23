#ifndef QUICK_SORT
#define QUICK_SORT

#include"bubble_sort.hpp"
void quick_sort(int a[],int left,int right)
{
	if (left>=right)
		return;
	int p=left+1;
	int i;
	for(i=left+1;i<=right;i++)
	{
		if(a[i]<a[left])
			swap(a[i],a[p++]);
	}
	swap(a[left],a[p-1]);
	quick_sort(a,left,p-2);
	quick_sort(a,p,right);
	return ;	
}

#endif
