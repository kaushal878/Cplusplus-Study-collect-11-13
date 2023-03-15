//Example 13.2: Program to read the content of file
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main()
{
    	ifstream fin;
    	char str[80];
    	fin.open("abc.txt");
    	fin>>str;     
   	// read only first string from file as spaces is treated as termination point
    	cout<<"\n From File :"<<str;   
    	getch();
    	return 0;
}
