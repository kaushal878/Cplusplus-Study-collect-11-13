//Example 11.2: Try block throwing exception
#include<iostream.h>
#include<conio.h>
int main() 
{
    int a, b;
    cout<<"Enter values of a & b:\n";
    cin>>a>>b;
    try 
    {
    if(b == 0)
        throw b; 
    else
        cout<<"Result = "<<(float)a/b;
    }
    catch(int i) 
    {
        cout<<"Divide by zero exception: b = "<<i;
    }
    cout<<"\nEND";
    getch();
    return 0;
}
