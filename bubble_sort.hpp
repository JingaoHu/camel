#ifndef BUBBLE_SORT
#define BUBBLE_SORT

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void bubble_sort(int a[],int len)
{
	int i,j;
	for(i=0;i<len;i++)
		for(j=0;j<len-i;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
	return ;	
}

#endif
