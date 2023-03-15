//Example 13.3: To overcome above problem use  " fin.getline(str,79);" as below:
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main()
{
ifstream fin;
char str[80];	fin.open("abc.txt");
fin.getline(str,79);  
// read only first line from file as new line is treated as termination point
//Reading also terminates when 79 characters are read.
  cout<<"\n From File :"<<str;   
  getch();
  return 0;
}
