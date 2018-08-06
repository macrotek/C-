/* Program: Program for Friend Class
   Name : Babar Ganesh Ravso
   Class: SE(CSE)
   Roll NO: 201
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class data
{
	int rno,year;
	char name[30],class1[10],branch[20];
public:
	void getdata()
{
	cout<<"\n\tENTER ROLL NO\t";
	cin>>rno;
	cout<<"\n\tENTER NAME\t";
	cin>>name;
	cout<<"\n\tENTER YEAR\t";
	cin>>year;
	cout<<"\n\tENTER CLASS\t";
	cin>>class1;
	cout<<"\n\tENTER BRANCH\t";
	cin>>branch;
}
friend class exam;
}obj;
class exam
{
	int mark[5],tot,avg;
	char grade[20];
public:
	void getmark();
	void total();
	void grade1();
	void display();
}obj1;
void exam::getmark()
{
	int i;
	cout<<"\n\tENTER MARKS OF SUBJECTS AS FOLLOWS";
	cout<<"\n\t1.DMS\t2.AM\t3.DSMP\t4.DS\t5.CN-1\n";
for(i=0;i<5;i++)
	cin>>mark[i];
}
void exam::total()
{
	int i;
	tot=0;
for(i=0;i<5;i++)
{
	tot=tot+mark[i];
}
	avg=tot/5;
}
void exam::grade1()
{
	if(avg>=66)
	strcpy(grade,"DISTINCTION");
	else if(avg>=60)
	strcpy(grade,"FIRST CLASS");
	else if(avg>=50)
	strcpy(grade,"SECOND CLASS");
	else if(avg>=40)
	strcpy(grade,"PASS CLASS");
else
	strcpy(grade,"FAIL");
}
void exam::display()
{
	int j;
	cout<<"\n\n";
for(j=0;j<=50;j++)
	cout<<"*";
	cout<<"\n\tSHIVAJI UNIVERSITY,KOLHAPUR";
	cout<<"\n\t\tRESULT";
	cout<<"\n\tNAME="<<obj.name;
	cout<<"\n\tROLL NO="<<obj.rno<<"\tYEAR="<<obj.year;
	cout<<"\n\tCLASS="<<obj.class1<<"\tBRANCH="<<obj.branch;
	cout<<"\n\n";
for(j=0;j<=48;j++)
		cout<<"_";
	cout<<"\n|\tSR NO\t|\tSUBJECT\t|\tMARKS\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n|\t1.\t|\tDMS\t|\t"<<mark[0]<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n|\t2.\t|\tAM\t|\t"<<mark[1]<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n|\t3.\t|\tDSMP\t|\t"<<mark[2]<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n|\t4.\t|\tDS\t|\t"<<mark[3]<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n|\t5.\t|\tCN-1\t|\t"<<mark[4]<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n\t\t|\tTOTAL\t|\t"<<tot<<"\t|";
	cout<<"\n";
for(j=0;j<=48;j++)
	cout<<"_";
	cout<<"\n\tAVERAGE="<<avg;
	cout<<"\n\tGRADE="<<grade;
	cout<<"\n\n";
for(j=0;j<=50;j++)
	cout<<"*";
}
void main()
{
      clrscr();
	obj.getdata();
	obj1.getmark();
	obj1.total();
	obj1.grade1();
	obj1.display();
	getch();
}