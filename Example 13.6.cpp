//Example 13.6: Program to read the contents of a text file and display them on the screen using insertion operator and getline method.
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
int main()
{
	char str[100];
	ifstream fin;
	fin.open("abc.txt");
	while(!fin.eof())
	{
		fin.getline(str,99);
		cout<<str;
	}
	fin.close();
	getch();
	return 0;
}
