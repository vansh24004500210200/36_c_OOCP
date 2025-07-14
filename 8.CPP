/*Print Well Done message using Loop*/
#include<iostream.h>
#include<conio.h>

void main()
{
	int n,i;
	clrscr();

	cout<<"Enter Your Number of Print: ";
	cin>>n;
	cout<<endl;

	for(i=1;i<=n;i++)
	{
		cout<<"Well Done";
		cout<<endl;
	}



	getch();
}