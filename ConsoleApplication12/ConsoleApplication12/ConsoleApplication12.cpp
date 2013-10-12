#include "stdafx.h"
#include <iostream>

using namespace std;

int power(int x,int y)
{
	int result=1;
	if(y==1)
		result=x;
	else
		result=x*power(x,y-1);
	return result;
}

int main()
{
	int x=3,y=4;
	cout<<power(x,y)<<endl;
	return 0;
}