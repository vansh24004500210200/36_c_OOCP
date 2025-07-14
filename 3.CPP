#include<iostream.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	clrscr();

	cout<<"Enter Your 1st Number:";
	cin>>n1;

	cout<<endl;

	cout<<"Enter Your 2nd Number:";
	cin>>n2;

	cout<<endl;

	cout<<"Enter Your 3rd Number:";
	cin>>n3;

	cout<<endl;

	if(n1<n2)
	{
		if(n1<n3)
		cout<<n1<<" is Less than "<<n2<<" and "<<n3;

		else
		cout<<n3<<" is Less than "<<n2<<" and "<<n1;
	}
	else
	{       if(n2<n3)
		cout<<n2<<" is Less than "<<n1<<" and "<<n3;

		else
		cout<<n3<<" is Less than "<<n3<<" and "<<n1;
	}

	getch();
}