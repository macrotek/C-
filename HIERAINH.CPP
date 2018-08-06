/* program : program for hierachical inheritance
   Name: Babar Ganesh Ravso
   Class: SE(CSE)
   Roll NO: 201
*/
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a,b;
	void getnumber()
	{
	cout<<"\n Enter the number\t";
	cin>>a;
	}
};
class b: public a
{
	public:
	void square()
	{
	getnumber();
	cout<<"\n square of number\t "<<(a*a);
	cout<<"\n \t-------";
	}
};
class c:public a
{
	public:
	void cube()
	{
	getnumber();
	cout<<"\n \n cube of number"<<(a*a*a);
	cout<<"\n \n ----\t";
	}
};
int main()
{
clrscr();
	b b1;
	b1.square();
	c c1;
	c1.cube();
	getch();
}