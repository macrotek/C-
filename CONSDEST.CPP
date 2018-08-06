/*program : program for constructor and destructor.
 Name : Babar Ganesh Ravso
 Class : SE(CSE)
 ROll No: 201
 */
 #include<iostream.h>
 #include<conio.h>
 class account
 {
	private:
	float bal, intr,acc,amt;
	float rate,dep,mon;
	char nm[10];
	public:
	account();
	~account();
	void getbal();
	void deposit();
	void compound();
	void menu();
	void withdraw();
	void display();

};
	account:: account()
	{
		cout<<"Enter the account number\n";
		cin>>acc;
		cout<<"Enter the name of customer";
		cin>>nm;
		rate=0.02;
		intr=0;
		dep=0;
		amt=0;
		cout<<"Enter your balance\n";
		cin>>bal;
	}
	account:: ~account()
	{
	cout<<" Thanks\n";
	cout<<"\n Meet again ";
	getch();
	}
	void account:: deposit(void)
	{
	cout<<"\n Enter the deposit";
	cin>>dep;
	bal=bal+dep;
	cout<<"The totoal balance"<<bal;
	}
	void account::getbal(void)
	{
	cout<<"\n balance is " <<bal;
	}
	void account::compound(void)
	{
	cout<<"\n how many months";
	cin>>mon;
	intr=bal*rate*mon;
	bal=bal+intr;
	cout<<"\n The total balance " <<bal;
	}
	void account::withdraw()
	{
	cout<<"\n Enter the amount for withdraw=";
	cin>>amt;
	if(amt<bal)
	{
	bal=bal-amt;
	cout<<"\n Total balance is:"<<bal;
	}
	else
	{
	cout<<"\n sorry you can't withdraw";
	 }
	void account:: menu()
	{
		cout<<" 1. deposit \n 2.withdraw \n 3. compound \n 4.balance \n 5. Display\n";
	 }
	void account::display()
	{
	cout<<"Acc no.\t name\t deposit\t withdraw \tinterest \t balance\n";
	cout<<acc<<"\t"<<nm<<"\t"<<dep<<"\t"<<amt<<"\t"<<int<<"\t"<<bal;
	}
		void main()
		{
		clrscr();
		account ac;
		int ch;
		char choice;
		do
		{
		     ac.menu();
		     cout<<"\n Enter your choice";
		     cin>>ch;
		     switch(ch)
		     {
		     case 1:
			  ac.deposit();
			  break;
		     case 2:
			  ac. withdraw();
			  break;
		     case 3:
			  ac.compound();
			  break;
		     case 4:
			  ac. getbal();
			  break;
		     case 5:
			  ac. display();
			  break;
		     default:
			   cout<< "sorry you enter the wrong choice";
			   }
			  cout<<"\n do you want to countinue";
			  cin>>choice;

		}while(choice=='y'||choice=='Y');
		}

		getch();

		}

