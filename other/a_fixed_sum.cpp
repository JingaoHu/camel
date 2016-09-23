#include<iostream>
using namespace std;
static int res=0;
void f(int *a,int begin,int len,int sum)
{
	if(begin>len||sum<0)
		return;
	if(sum==0)
	{
		res++;
		return;
	}
	f(a,begin+1,len,sum);
	f(a,begin+1,len,sum-a[begin]);
}
int main()
{
	int n,sum;
	cin>>n>>sum;
	int *a=new int(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	f(a,0,n,sum);
	cout<<res<<endl;
	return 0;
}
