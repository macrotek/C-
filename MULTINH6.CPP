/*Program: Program to implement Multiple Inheritance
  Name : Babar Ganesh Ravso
  Class: SE(CSE)
  Roll No:201
*/
#include<iostream.h>
#include<conio.h>
class employee1
{
protected:
	char nm[20];
	char dpt[20],des[10];
	int code,PR,FUND;
public:
void getdata()
{
	cout<<"\n\tENTER THE EMPLOYEE NAME:\t";
	cin>>nm;
	cout<<"\n\tENTER CODE:\t";
	cin>>code;
	cout<<"\n\t ENTER DEPARTMENT:\t";
	cin>>dpt;
	cout<<"\n\tENTER DESSIGNATION:\t";
	cin>>des;
}
};
class employee2
{
protected:
	int acno,date,month,year;
public:
void getdata1()
{
	cout<<"\n\t ENTER THE ACCOUNT NO:\t";
	cin>>acno;
	cout<<"\n\t ENTER DATE OF JOINING:\t";
	cin>>date>>month>>year;
}
};
class employee3:public employee1,public employee2
{
protected:
	float days,sal,salary,den,hra,travel,gross,
	prfund,gpf,lic,dedn,net,total1,total2;
public:
void getdata2()
{
	employee1::getdata();
	employee2::getdata1();
	cout<<"\n\tENTER PAYABLE DAYS:\t";
	cin>>days;
	cout<<"\n\tENTER SALARY PER DAY:\t";
	cin>>sal;
}
void formula()
{
	salary=days*sal;
	den=salary*0.05;
	hra=salary*0.12;
	travel= salary*0.09;
	gross=salary+den+hra+travel;
	prfund=salary*0.04;
	gpf=salary*0.01;
	lic=salary*0.12;
	dedn=prfund+gpf+lic;
	total1=gross;
	total2=dedn;
	net=total1-total2;
}
void display();
};
	void employee3::display()
{
	int i,j;
	cout<<"\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n\t\t\tWIPRO\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n|\tNAME="<<nm<<"\t\t|\tACCOUNT NO="<<acno<<"\t\t|";
	cout<<"\n|\tCODE="<<code<<"\t\t|\tDESIGNATION="<<des<<"\t|";
	cout<<"\n|\tDEPT="<<dpt<<"\t\t|\tDOJ="<<date<<"/"<<month<<"/"<<
	year<<"\t\t|";
	cout<<"\n|\t\t\t\t|\tDAYS PAYMENT="<<days<<"\t\t|\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n|PAYMENT\t|\tRs\t|\tDEDUCTION | Rs\t|\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n|BASIC SALARY=\t\t"<<salary<<"\t|\t"<<endl;
	PR*.FUND= "<<prfund";
	cout<<"\n|\tDENTAL=\t\t"<<den<<"\t|\tGPF=\t\t"<<gpf<<"\t|";
	cout<<"\n|\tHRA=\t\t"<<hra<<"\t|\tLIC=\t\t"<<lic<<"\t|";
	cout<<"\n|\tTRAVELLING=\t"<<travel<<"\t|\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n|\tTOTAL1="<<total1<<"\t\t|\tTOTAL2="<<total2<<
	"\t\t|\n";
for(i=0;i<65;i++)
	cout<<"_";
	cout<<"\n\tNET PAYMENT="<<net;
	cout<<"\n";
for(i=0;i<65;i++)
	cout<<"_";
}
void main()
{
	clrscr();
	employee3 e;
	e.getdata2();
	e.formula();
	e.display();
}