//Example 13.4: Detecting end of file using EOF() function
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{   
    char ch;
    ifstream fin;
   	fin.open("abc.txt");
    while(!fin.eof())   // using eof() function 
    {
     	fin.get(ch); // Reads one character at a time
     	cout<<ch;
    }  
   	 fin.close();
   	 getch();
   	 return 0;
}
