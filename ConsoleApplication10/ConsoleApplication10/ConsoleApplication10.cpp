
#include <iostream>
using namespace std;

double change(double f)
{
	double c=0;
	c=(f-32)*5/9;
	return c;
}
int main()
{
	double f=64;
	double c=0;
	c=change(f);
	cout<<c<<endl;
	return 0;
}
