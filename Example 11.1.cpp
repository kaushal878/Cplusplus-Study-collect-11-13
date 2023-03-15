//Example 11.1: Simple program to multiply two numbers
#include <iostream.h>
#include<conio.h>
int main()
{
	double a, b, c;
	cout << "Please provide two numbers\n";
	cout << "First Number: ";
	cin >> a;
	cout << "Second Number: ";
	cin >> b;
	c = a * b;
	cout << "\n" << a << " * " << b << " = " << c << "\n\n";
	getch();
	return 0;
}
