//Example 11.7: Showing use of netsed try…..catch() statement
#include <iostream.h>
#include<conio.h>
#include <string.h>
int main()
{
	char Number1[40], Number2[40];
	double Operand1, Operand2, Result;
	char Operator;
	
try 
{
		cout << "To proceed, enter\n";
		cout << "First Number: "; cin >> Number1;
		cout << "An Operator: "; cin >> Operator;
		cout << "Second Number: "; cin >> Number2;
		// Examine each character of the first operand to find out if the user
 		//included a non-digit in the number
		for(int i = 0; i < strlen(Number1); i++)
		    if( (!isdigit(Number1[i])) && (Number1[i] != '.') ) 
			throw Number1; // Send the error as a character
			Operand1 = atof(Number1);
		// Do the same for the second number entered
		for(int j = 0; j < strlen(Number2); j++)
		    if( (!isdigit(Number2[j])) && (Number2[j] != '.') ) 
			throw Number2;//[j]; // Send the error as a character
			Operand2 = atof(Number2);

	if(Operator != '+' && Operator != '-' &&   Operator != '*' && Operator != '/')
			throw Operator;
		switch(Operator)
		{
		case '+':
			Result = Operand1 + Operand2;
			cout << "\n" << Operand1 << " + " 
				 << Operand2 << " = " << Result;
			break;
		case '-':
			Result = Operand1 - Operand2;
			cout << "\n" << Operand1 << " - "
				 << Operand2 << " = " << Result;
			break;
		case '*':
			Result = Operand1 * Operand2;
			cout << "\n" << Operand1 << " * "
				 << Operand2 << " = " << Result;
			break;
		case '/':
			// The following exception is nested in the previous try
			try {
				if(Operand2 == 0)
					throw "Division by 0 not allowed";

				Result = Operand1 / Operand2;

				cout << "\n" << Operand1 << " / "
					 << Operand2 << " = " << Result;
			}
			catch(const char * Str)
			{
				cout << "\nBad Operation: " << Str;
			}
			break;
		}
	}
	catch(const char n)
	{
		cout << "\nOperation Error: " << n << " is not a valid operator";
	}
	catch(const char *BadOperand)
	{
		cout<<"\nOperand Error:"<< BadOperand << " is not a valid number";
	}
	cout << "\n\n";
	getch();
	return 0;
}
