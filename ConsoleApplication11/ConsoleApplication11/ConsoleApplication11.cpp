
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int m=3,n=3;
	int C(int n,int m);
	cout<<C(n,m)<<endl;
	return 0;
}
int C(int n,int m)
{
	int c;
	int jiecheng(int n);
	c=jiecheng(n)/(jiecheng(m)*jiecheng(n-m));
	return c;
}
int jiecheng(int n)
{
	int a=1;
	for(int i=1;i<n;i++)
	{
		a=a*i;
	}
	return a;
}
