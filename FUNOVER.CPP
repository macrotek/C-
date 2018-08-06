/*program: program for function overloading
  Name : Babar Ganesh Ravso
  Class: SE(CSE)
  Roll no: 201
*/
#include<iostream.h>
#include<conio.h>
class geometry
{
	private:
	float l,b,h,dia,s,v,x,in,rn,ht;
	public:
	void area(float l,float b,float h)
	{
	s=2*1*b*b*h*h*l;
		cout<<"Area of cuboid is:"<<s<<"sq.unit";
	}
	void area(float x)
	{
	s=6*x*x;
		cout<<"\n surface area of cube:"<<s<<"sq.unit";
	}
	void area(float rn,float ht)
	{
	float pi=3.142;
	s=2*pi*rn*(ht+rn);
	cout<<"\n surface area of cylinder is:"<<s<<"sq.unit";
	}
	void vol(float l,float b,float h )
	{
	v=l*b*h;
	cout<<"\n surface area of cylinder is:"<<v<<"cb.unit";
	}
	void vol(float x)
	{
	v=x*x*x;
		cout<<"\n volume area of cube:"<<v<<"sq.unit";
	}
	void vol(float rn,float ht)
	{
	float pi=3.142;
	v=pi*rn*ht*rn;
	cout<<"\n volume of cylinder is:"<<v<<"sq.unit";
	}
};
	int main()
	{
	clrscr();
		geometry g;
		int ch,i=10;
		while(1)
		{
		cout<<"\n find volume and surface area of shapes";
		cout<<"\n 1.cuboid \n 2.cube \n 3.cylinder \n 4.exit";
		cout<<"\n choice::";
		cin>>ch;
		if(ch==4)
		break;
		switch(ch)
		{
		case 1:
			int l,b,h;
			cout<<"\n enter l,b,h of cuboid";
			cin>>l>>b>>h;
			g.area(l,b,h);
			g.vol(l,b,h);
			break;
		case 2:
			int s;
			cout<<"\n enter the sides of cube";
			cin>>s;
			g.area(s);
			g.vol(s);
			cout<<"\n doagonal of cube:"<<1.73*i<<"unit";
			break;
		case 3:
			int rn,ht;
			cout<<"\n enter rn and ht of cylinder";
			cin>>rn>>ht;
			g.area(rn,ht);
			g.vol(rn,ht);
			break;

			default:
			cout<<"\n wrong chioce";
			}
		}
		return 0;

	}
