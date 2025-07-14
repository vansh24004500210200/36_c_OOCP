/*Swaping value without using third variable*/
#include<iostream.h>
#include<conio.h>

void main()
{
	int n1,n2;
	clrscr();

	cout<<"Enter Your 1st Number: ";
	cin>>n1;

	cout<<"Enter Your 2nd Number: ";
	cin>>n2;

	cout<<"Before swaping without using third variable vale of n1 "<<n1<<" and "<<n2<<" is:"<<n1<<" "<<n2;
	cout<<endl<<endl;

	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;

	cout<<"Before swaping without using third variable vale of n1 "<<n1<<" and "<<n2<<" is:"<<n1<<" "<<n2;

	getch();
}