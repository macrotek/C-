/* Program: Program to implement concept of friend function
   Name: Babar Ganesh Ravso
   Class : SE(CSE)
   Roll No: 201
*/
#include<iostream.h>
#include<conio.h>
class one
{
	int a,b,c;
public:
	void getdata();
	friend int largest(one obj);
}obj2;
void one::getdata()
{
	cout<<"\n\tENTER THREE NUMBERS\n";
	cin>>a>>b>>c;
}
	int largest(one obj)
{
	int max;
	max=obj.a;
	if(obj.b>max)
	max=obj.b;
	if(obj.c>max)
	max=obj.c;
       return(max);
}
void main()
{
	clrscr();
	int maxi;
	cout<<"\n\tPROGRAM FOR FRIEND FUNCTION";
		obj2.getdata();
	maxi=largest(obj2);
	cout<<"\n\tLARGEST NO="<<maxi;
	getch();
}