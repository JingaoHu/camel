#include<iostream>
#include<cstring>
using namespace std;
int f(char a,char b)
{
	if(a==b)
		return 0;
	else 
		return 1;
}
int min(int a,int b,int c)
{
	int min=a>b?b:a;
	return min>c?c:min;
}
int dis(char *a,char *b)
{
	if(*a=='\0')
		return strlen(b);
	if(*b=='\0')
		return strlen(b);
	return min(dis(a+1,b+1)+f(*a,*b),dis(a,b+1)+1,dis(a+1,b)+1);
}
int main()
{
	char a[100];
	char b[100];
	cin>>a>>b;
	cout<<dis(a,b)<<endl;
	return 0;
}
