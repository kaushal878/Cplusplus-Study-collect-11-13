//Example 13.10: Program to write multiple objects to and from filee
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class student
{
	int roll ;
	char name[30];
	char address[60];
	public:
	void read_data( );   // member function prototype
	void write_data( );  // member function prototype
};
void student::read_data( )      // member function defintion
 {
	cout<<"\n Enter Roll :";
	cin>>roll;
	cout<<"\n Student name :";
	cin>>name;
	cout<<"\n Enter Address :";
	cin>>address;
 }
void student:: write_data()
 {
	cout<<"\n Roll :"<<roll;
	cout<<"\n Name :"<<name;
	cout<<"\n Address :"<<address;
  }
int main()
 {
	student s;
	int i;
	ofstream fout;
	fout.open("student.dat");
	for(i=0;i<5;i++)
	{
		s.read_data();  // member function call to get data from KBD
		fout.write((char *)&s,sizeof(student)); // write object in file
	}
	fout.close();
	cout<<"Write Completed:"<<endl;
	getch();
	return 0;
 }
