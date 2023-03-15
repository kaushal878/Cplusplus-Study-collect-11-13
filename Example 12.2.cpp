//Example 12.2: Finding miminum of two values of different types by using template function
#include <iostream.h>
#include<conio.h>
template <class T,class U>
T GetMin (T a, U b)
{
	T result;
	result = (a<b)? a : b;
	return (result);
}
int main ()
{
	int x=5,r;
	long y=9;
	r=GetMin(x,y);
	cout <<"Smaller of two numbers is::"<<r<< endl;
	getch();
	return 0;
}
