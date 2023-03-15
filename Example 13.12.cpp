//Example 13.12: Program to read third object from file student.dat
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
	ifstream fin;
	fin.open("student.dat");
	fin.seekg(sizeof(s)*2,ios::cur);
	fin.read((char *)&s,sizeof(student));
	s.write_data( );
	fin.close();
	getch();
	return 0;
}
