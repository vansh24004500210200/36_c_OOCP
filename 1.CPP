	/* Arithmetic Operations*/
#include<iostream.h>
#include<conio.h>

void main()
{
	int n1,n2,ans;
	clrscr();

	cout<<"Enter Your 1st Number: ";
	cin>>n1;

	cout<<"Enter Your 2nd Number: ";
	cin>>n2;

	ans = n1 + n2;
	cout<<"Addition of "<<n1<<" and "<<n2<<" is: "<<ans;
	cout<<endl;

	ans = n1 - n2;
	cout<<"Sunstraction of "<<n1<<" and "<<n2<<" is: "<<ans;
	cout<<endl;

	ans = n1 * n2;
	cout<<"Multiplication of "<<n1<<" and "<<n2<<" is: "<<ans;
	cout<<endl;

	ans = n1 / n2;
	cout<<"Division of "<<n1<<" and "<<n2<<" is: "<<ans;
	cout<<endl;

	ans = n1 % n2;
	cout<<"Modulo Division of "<<n1<<" and "<<n2<<" is: "<<ans;
	cout<<endl;



	getch();
}