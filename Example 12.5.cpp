//Example 12.5: Function Template specialization
#include<iostream.h>
#include<conio.h>
#include<string.h>
template<class T>
T max(T a, T b)
{
	return a>b?a:b;

}
char *max(char *a, char *b)
{
	return strcmp(a,b)>0?a:b;
}
int main()
{
	cout<<"max(4,6)="<<max(4,6)<<endl;
	cout<<"max(5.5,3.8)="<<max(5.5,3.8)<<endl;
	cout<<"max(\"Arjun\",\"Binita\")="<<max("Arjun","Binita")<<endl;
	getch();
	return 0;
}
