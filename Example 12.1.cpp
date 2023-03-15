//Example 12.1: Finding maximum of two values by using template function
#include <iostream.h>
#include<conio.h>
template <class T>
T GetMax (T a, T b) 
{
	T result;
	result = (a>b)? a : b;
	return (result);
}
int main () 
{
	int a=5, b=6, k;
	float l=10, m=5, n;
	char x='a', y='b', z;
	k=GetMax(a,b);
	n=GetMax(l,m);
	z=GetMax(x,y);
	cout <<"Larger of ingeghers::"<<k<< endl;
	cout <<"Larger of floats::"<<n<< endl;
	cout <<"Larger of characters::"<<z<< endl;
	getch();
	return 0;
}
