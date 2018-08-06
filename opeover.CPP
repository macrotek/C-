/* program : program for operator overloading
   Name : Babar Ganesh Ravso
   Class : SE(CSE)
   Roll No: 201
*/

#include<iostream.h>
#include<conio.h>
class number
{
	int a;
	public:
	number()
	{
	a=0;
	}
	number(int x)
	{
	a=x;
	}
		number operator+(number &n1);
		int operator>(number & n);
		void display();
};
	number number::operator+(number & n1)
	{
		number n;
		n.a=a+n1.a;
		return n;
	}
	int number::operator>(number &n)
	{
		return(a>n.a);
	}
	void number::display()
	{
	cout<<a<<"\n";
	}
		void main()
		{
		int a,b,c;
		clrscr();
		cout<<"\nProgram for operator overloading:";
		cout<<"\nEnter three for a,b,c:\n";
		cin>>a;
		cout<<"\n";
		cin>>b;
		cout<<"\n";
		cin>>c;
		number n(a),n1(b),n2(c);
		number n3,n4;
		n3=n+n1;
		cout<<"\nX=a+b=\t";
		n3.display();
		n4=n+n2;
		cout<<"\nY=a+c=\t";
		n4.display();
		if(n3>n4)
		cout<<"\nX is greater";
		else
		cout<<"\nY is greater";
		getch();
		}


