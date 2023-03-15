//Example 13.5: Detecting end of file using filestream object
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
    char ch;
    ifstream fin;
    fin.open("abc.txt");
    while(fin) // file object 
    {
    	fin.get(ch);
    	cout<<ch;
    }  
   	fin.close();
   	getch();
   	return 0;
}   
