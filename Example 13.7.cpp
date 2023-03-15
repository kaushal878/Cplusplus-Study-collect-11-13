//Example 13.7: Program to read the contents of a text file and display them on the screen using extraction operator 
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
int main()
{
	char str[20];
	ifstream fin;
	fin.open("abc.txt");
	while(!fin.eof())
	{
		fin>>str;//Reads one word at a time
		cout<<str<<endl;
	}
	fin.close();
	getch();
	return 0;
}
