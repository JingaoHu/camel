#ifndef GEN_LIST
#define GEN_LIST

#include<stdlib.h>
void gen_list(int a[],int len,int min,int max)
{
	int i;
	for(i=0;i<len;i++)
	{
		a[i]=(rand()%(max-min))+min;
	}
	return ;
}

#endif
