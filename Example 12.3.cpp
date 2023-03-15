//Example 12.3: Class templates to find larger of two numbers 
#include <iostream.h>
#include<conio.h>
template <class T>
class mypair 
{
T a, b;
public:
mypair (T first, T second)
{
	a=first; b=second;
}
T getmax ()
{
	T retval;
	retval = a>b? a : b;
	return retval;
}
};
int main ( )
{
    mypair<int> object1(100, 75);
    cout <<"Larger="<<object1.getmax()<<endl;
    mypair<double> object2(90.80, 98.56);
    cout <<"Larger="<<object2.getmax()<<endl;
    getch();
    return 0;
}
