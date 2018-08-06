/* Program : Program to implement Arithmetic operation on Polynomial Expressions
   Name : Babar Ganesh Ravso 
   Class : SE(CSE)
   Roll No: 201
*/
#include<iostream.h>
#include<conio.h>
struct node
{
	int coe,exp;
	struct node *next;
};
class polynomial
{
		struct node *start,*n,*p;
public:
		void get_poly();
		void show();
		void add(polynomial p1,polynomial p2);
};
void polynomial::get_poly()
{
	char c='y';
	start=NULL;
	while(c=='y'||c=='Y')
{
	n=new node;
	cout<<"Enter The Coefficient :";
	cin>>n->coe;
	cout<<"Enter the Exponent :";
	cin>>n->exp;
	n->next=NULL;
	p->next=n;
if(start==NULL)
{
	start=n;
}
	p=n;
	cout<<"Enter y To add more Nodes";
	cin>>c;
}
}
void polynomial::show()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
{
	cout<<ptr->coe<<"X^"<<ptr->exp<<"";
	ptr=ptr->next;
if(ptr!=NULL)
	cout<<"+";
}
	cout<<"\n";
}
void polynomial::add(polynomial p1,polynomial p2)
{
	struct node *p1ptr,*p2ptr;
	int coe,exp;
	start=NULL;
	p1ptr=p1.start;
	p2ptr=p2.start;
	while(p1ptr!=NULL && p2ptr!=NULL)
{
if(p1ptr->exp==p2ptr->exp)
{
	coe=p1ptr->coe+p2ptr->coe;
	exp=p1ptr->exp;
	p1ptr=p1ptr->next;
	p2ptr=p2ptr->next;
}
else if(p1ptr->exp>p2ptr->exp)
{
	coe=p1ptr->coe;
	exp=p1ptr->exp;
	p1ptr=p1ptr->next;
}
else if(p1ptr->exp<p2ptr->exp)
{
	coe=p2ptr->coe;
	exp=p2ptr->exp;
	p2ptr=p2ptr->next;
}
	n=new node;
if(start==NULL)
	start=n;
	n->coe=coe;
	n->exp=exp;
	n->next=NULL;
	p->next=n;
	p=n;
}
if(p1ptr==NULL)
{
	while(p2ptr!=NULL)
{
	coe=p2ptr->coe;
	exp=p2ptr->exp;
	p2ptr=p2ptr->next;
	n=new node;
if(start==NULL)
	start=n;
	n->coe=coe;
	n->exp=exp;
	n->next=NULL;
	p->next=n;
	p=n;
}
}
else if(p2ptr==NULL)
{
	while(p1ptr!=NULL)
{
	coe=p1ptr->coe;
	exp=p1ptr->exp;
	p1ptr=p1ptr->next;
	n=new node;
if(start==NULL)
	start=n;
	n->coe=coe;
	n->exp=exp;
	n->next=NULL;
	p->next=n;
	p=n;
}
}
}
void main()
{
clrscr();
	int ch;
	char l;
	polynomial p1,p2,sum;
	cout<<"\n First Polynomial";
		p1.get_poly();
	cout<<"\n Second Polynomial";
		p2.get_poly();
	cout<<"\n First Polynomial is :";
		p1.show();
	cout<<"\n Second Polynomial is :";
		p2.show();
	do
	{
		cout<<"\n 1.Addition";
		cout<<"\n 2.Exit";
		cout<<"\n Enter the Choice";
		cin>>ch;
switch(ch)
{
	case 1:
		cout<<"\n The sum of two polynomial is: ";
		sum.add(p1,p2);
		sum.show();
	break;
	case 2:
		cout<<"\n Exit";
	break;
}
		cout<<"\n Do you want continue ";
		cin>>l;
}while(l=='y'||l=='Y');
getch();
}