/* program : program for constructor overloading
   Name : Babar Ganesh Ravso
   Class: SE(CSE)
   Roll no:201
*/
#include<iostream.h>
#include<conio.h>
int ch;
class constr
{
	public:
		int a,b,c;
		constr(int,int);
		constr(float,float);
		constr(int,int,int);
		void putdata();
		void putdata1();
};
constr :: constr(int x,int y)
{
	if(ch==1)
	{
	int c;
	c=x+y;
	cout<<"\n addition"<<c;
	}
	if(ch==2)
	{
	int c;
	c=x-y;
	cout<<"\n substraction"<<c;
	}
}
constr :: constr(float x,float y)
{
	if(ch==1)
	{
	float c;
	c=x+y;
	cout<<"\n Addition"<<c;
	}
	if(ch==2)
	{
	float c;
	c=x-y;
	cout<<"\n substraction"<<c;
	}
}
constr :: constr(int a,int b, int c)
{
int d;
d=a*b*c;
cout<<"\n multiplication"<<d;
}
	int main()
	{
	clrscr();
	static int x,y,z;
	static float p,q;
	while(1)
	{
	cout<<"\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4.Exit";
	cout<<"\n Enter your choice\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
		      cout<<"\n Enter two integer no\t";
		      cin>>x>>y;
		      constr c1(x,y);
		      cout<<"\nEnter the two float numbers\n";
		      cin>>p>>q;
		      constr c2(p,q);
		      cout<<"\n";
		      getch();
		      break;
		case 2:
		      cout<<"\n Enter two integer numbers\t" ;
		      cin>>x>>y;
		      constr c3(x,y);
		      cout<<"\n Enter two float numbers\n";
		      cin>>p>>q;
		      constr c4(p,q);
		      cout<<"substraction is:";
		      getch();
		      break;
		case 3:
		      cout<<"\n Entere three integer numbers\t";
		      cin>>x>>y>>z;
		      constr c5(x,y,z);
		      getch();
		      break;
		case 4:
		      return(0);

		default:
		cout<<"\n wrong choice\t";
		getch();

	} return 0;
	}
	}