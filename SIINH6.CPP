/* Program : Program for Simple Inheritance
   Name : Babar Ganesh Ravso
   Class : SE(CSE)
   Roll No: 201
*/
#include <iostream.h>
#include<conio.h>
class base
 {
	int i, j;
	public:
	  void set(int a, int b) { i=a; j=b; }
	  void show() { cout << i << "\n " << j << "\n"; }
};
	class derived : public base {
	int k;
	public:
	  derived(int x) { k=x; }
	  void showk() { cout << k << "\n"; }
};
	void main()
{
	clrscr();
	derived ob(3);
	   ob.set(1,2);
	   ob.show();
	   ob.showk();
getch();
}