/*Convert Celsius into Fehrenheit*/
#include<iostream.h>
#include<conio.h>

void main()
{
	int C,F;
	clrscr();

	cout<<"Enter Your Temperature in Celsius: ";
	cin>>C;
	cout<<endl;

	F = (C * 9/5) + 32;

	cout<<"Your Temperature in Fahrenheit is: "<<F;




	getch();
}