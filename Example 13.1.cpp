//Example 13.1: Program to write content in the file
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main( )
{
    	ofstream fout;
    	fout.open("abc.txt");
    	fout<<"This is my first program in file handling";
    	fout<<"\n Hello again";
    	fout.close();
    	cout<<"Done"<<endl;
    	getch();
    	return 0;
}
