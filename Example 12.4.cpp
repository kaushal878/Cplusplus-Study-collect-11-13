//Example 12.4 class template specialization 
#include <iostream.h>
#include<conio.h>
template <class T>
class mycontainer
{
	T element;
	public:
	mycontainer (T arg)
	{
		element=arg;
	}
	T increase ()
	{
		return ++element;
	}
};
// class template specialization
template<>
class mycontainer<char> 
{
	char element;
	public:
	mycontainer<char>(char arg)
	{
		element=arg;
	}
	char uppercase()
	{
		if((element>='a')&&(element<='z'))
		element+='A'-'a';
		return element;
	}
};
int main ()
{
	mycontainer<int> myint (7);
	mycontainer<char> mychar('b');
	cout <<"After Increment:"<<myint.increase()<< endl;
	cout <<"Upeer Case is:"<<mychar.uppercase()<< endl;
	getch();
	return 0;
}
