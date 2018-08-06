/* Program: Program for Multilevel Inheritance
   Name : Babar Ganesh Ravso
   Class : SE(CSE)
   Roll No: 201
*/
#include<iostream.h>
#include<Conio.h>
#include<string.h>
int ch;
class ONE
{
	protected:
	int cc1,cc2,milage1,milage2;
public:
	char type1[20],type2[20];
void getdata()
{
	cout<<"\n\tENTER CC\t";
	cin>>cc1;
	cout<<"\n\tENTER MILAGE\t";
	cin>>milage1;
}
void getdata1()
	{ cout<<"\n\tENTER CC\t";
	cin>>cc2;
	cout<<"\n\tENTER MILAGE\t";
	cin>>milage2;
}
};
class TWO:public ONE
{
	protected:
	int seat1,seat2,model1,model2;
	public:
void getdata2()
{
ONE::getdata();
	cout<<"\n\tENTER NUMBER OF SEATS\t";
	cin>>seat1;
	cout<<"\n\tENTER MODEL\t";
	cin>>model1;
}
void getdata3()
{
ONE::getdata1();
	cout<<"\n\tENTER NUMBER OF SEATS\t";
	cin>>seat2;
	cout<<"\n\tENTER MODEL\t";
	cin>>model2;
}
};
class THREE:public TWO
{
	public:
	void getdata4()
{
TWO::getdata2();
}
	void getdata5()
{
TWO::getdata3();
}
	void display();
	void compare();
}obj;
	void THREE::display()
{
	int j;
	cout<<"\n";
	for(j=0;j<=50;j++)
	cout<<"_";
	cout<<"\n\tINFORMATION OF FIRST VEHICLE";
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_";
	cout<<"\n\tTYPE=\t"<<obj.type1;
	cout<<"\n\tMILAGE=\t"<<obj.milage1;
	cout<<"\n\tCC=\t"<<obj.cc1;
	cout<<"\n\tNo OF SEATS="<<obj.seat1;
	cout<<"\n\tMODEL=\t"<<obj.model1;
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_ ";
	cout<<"\n\tINFORMATION OF SECOND VEHICLE";
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_";
	cout<<"\n\tTYPE=\t"<<obj.type2;
	cout<<"\n\tMILAGE=\t"<<obj.milage2;
	cout<<"\n\tCC=\t"<<obj.cc2;
	cout<<"\n\tNo OF SEATS="<<obj.seat2;
	cout<<"\n\tMODEL=\t"<<obj.model2;
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_";
}
void THREE::compare()
{
	int j;
	if(ch==1)
{
	if((obj.milage1>obj.milage2))
{
	cout<<"\n\tFIRST VEHICLE IS BETTER THAN SECOND VEHICLE";
}
	else
{
	cout<<"\n\tSECOND VEHICLE IS BETTER THAN FIRST VEHICLE";
}
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_";
}
	if(ch==2)
{
	if((obj.cc1>obj.cc2))
{
	cout<<"\n\tFIRST VEHICLE IS BETTER THAN SECOND VEHICLE";
}
	else
{
	cout<<"\n\tSECOND VEHICLE IS BETTER THAN FIRST VEHICLE";
}
	cout<<"\n";
for(j=0;j<=50;j++)
	cout<<"_";
}
}
int main()
{
      clrscr();
	cout<<"\n\tPROGRAM FOR MULTILEVEL INHERITANCE\n";
	while(1)
{
	cout<<"\n\t1.TWO WHEELER\n\t2.FOUR WHEELER\n\t3.EXIT";
	cout<<"\n\tENTER YOUR CHOICE\n\t";
	cin>>ch;
switch(ch)
{
	case 1:
		cout<<"\n\tFOR FIRST VEHICLE\n";
	obj.THREE::getdata4();
		cout<<"\n\n\tFOR SECOND VEHICLE\n";
	obj.THREE::getdata5();
	strcpy(obj.type1,"TWO WHEELER");
	strcpy(obj.type2,"TWO WHEELER");
	obj.display();
	obj.compare();
break;
	case 2:
		cout<<"\n\tFOR FIRST VEHICLE\n";
	obj.THREE::getdata4();
		cout<<"\n\n\tFOR SECOND VEHICLE\n";
	obj.THREE::getdata5();
	strcpy(obj.type1,"FOUR WHEELER");
	strcpy(obj.type2,"FOUR WHEELER");
	obj.display();
	obj.compare();
break;
	case 3:
return (0);
default:
	cout<<"\n\tWRONG CHOICE";
}
}
}