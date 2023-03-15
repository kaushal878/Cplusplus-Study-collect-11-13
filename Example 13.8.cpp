//Example 13.8 Example of write() member function
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
	ofstream fout;
	fout.open("student.dat");
	cout<<"\n Enter Roll Number :";
	cin>>s.roll;
	cout<<"\n Enter Name :";
	cin>>s.name;
	cout<<"\n Enter address :";
	cin>>s.address;
	fout.write((char *)&s,sizeof(student));
	cout<<"Data is written to the file student.dat"<<endl;
	fout.close();
	cout<<"Done"<<endl;
	getch();
	return 0;
}
