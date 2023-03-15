//Exampl 13.9: Program to read data from a binary File using read ( ) member function
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
struct student
{
       int roll ;
       char name[30];
       char address[60];
};
int main()
{
     student s;
     ifstream fin;
     fin.open("student.dat");
     fin.read((char *)&s,sizeof(student));
     cout<<"\n Roll Number:"<<s.roll;
     cout<<"\n Name:"<<s.name;
     cout<<"\n Address:"<<s.address;
     fin.close();
     getch();
     return 0;
}
