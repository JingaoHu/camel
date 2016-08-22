#ifndef MERGE_SORT
#define MERGE_SORT

void merge(int a[],int left,int middle,int right)
{	
	int len=right-left+1;
	int p_left=left,p_right=middle+1;
	int temp[len];
	int i;
	for (i=0;i<len;i++)
	{
		if(p_left>middle)
		{
			temp[i]=a[p_right];
			p_right++;
			continue;
		}

		if(p_right>right)
		{
			temp[i]=a[p_left];
			p_left++;
			continue;
		}

		if(a[p_left]<a[p_right])
		{
			temp[i]=a[p_left];
			p_left++;
		}
		else 
		{
			temp[i]=a[p_right];
			p_right++;
		}
	}
	for (i=0;i<len;i++)
		a[i+left]=temp[i];

	return ;
}
void merge_sort(int a[],int left,int right)
{
	if(left==right) 
		return ;
	int middle=(left+right)/2;
	merge_sort(a,left,middle);
	merge_sort(a,middle+1,right);
	merge(a,left,middle,right);
	return ;	
}

#endif
