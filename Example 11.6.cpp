//Example 11.6: Showing how to catch all exception by using single catch block
#include <iostream.h>
#include<conio.h>
int main()
{
	double operand1, operand2, result;
	char opr; //operator
	cout << "To proceed, enter two numbers\n";
	try 
{
		cout << "First Number: ";
		cin >> operand1;
		cout << "Operator:";
		cin >> opr;
		cout << "Second Number: ";
		cin >> operand2;
		// Make sure the user typed a valid operator
		if(opr != '+' && opr != '-' && opr != '*' && opr != '/')
			throw opr;
		// Find out if the denominator is 0
		if(opr == '/')
			if(operand2== 0)
				throw 0;
		// Perform an operation based on the user's choice
		switch(opr)
		{
		case '+':
			result = operand1 + operand2;
			break;
		case '-':
			result = operand1 - operand2;
			break;
		case '*':
			result = operand1 * operand2;
			break;
		case '/':
			result = operand1 / operand2;
			break;
		}
		// Display the result of the operation
		cout<<operand1 << opr << operand2 << " = "<<result<<"\n";
	}
	catch(...)
	{
		cout << "Exception is occurred!!!!\n";
	}
	getch();
	return 0;
}
