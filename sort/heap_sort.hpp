#ifndef HEAP_SORT
#define HEAP_SORT

#define PARENT(i) ((i-1)>>2)
#define LEFT(i)   ((i<<1)+1)
#define RIGHT(i)  ((i<<1)+2)

inline void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
	return ;
}

void max_heapify(int a[],int len,int root)
{
	if(root>=len)
		return ;
	int max;
	if(left(root)<len && right(root)<len)
		max=a[left(root)]>a[right(root)]?left(root):right(root);
	else if(left(root)<len && right(root)>=len)
			max=left(root);
		else
			max=root;
		
	if(a[root]<a[max])
	{
		swap(a[root],a[max]);
		max_heapify(a,len,max);	
	}
	return ;
}
void build_max_heap(int a[],int len)
{
	for(int i=len-1;i>=0;i--)
		max_heapify(a,len,i);
	return ;
}

void heap_sort(int a[],int len)
{
	build_max_heap(a,len);
	for(int i=0;i<len;i++)
	{
		swap(a[0],a[len-1-i]);
		max_heapify(a,len-i-1,0);
	}
	return ;
}

#endif
