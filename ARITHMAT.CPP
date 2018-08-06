/* Program : Program to implement arithmatic operation using c++ language
   Name : Babar Ganesh Ravso
   Class : SE(CSE)
   Roll No:201
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,option,RESULT;
clrscr();
printf("\nEnter The Two Numbers ");
scanf("%d%d",&num1,&num2);
while(1)
{
clrscr();
printf("\nnumber1 is:%d",num1);
printf("\n number2 is:%d",num2);
printf("\n\t 1.Addidtion \n\t 2.Substraction \n\t 3.Multiplication \n\t 4. Division\n\t 5.exit \n option:");
scanf("%d",&option);
if(option>=5)
break;
switch(option)
{
case 1://for addition
       RESULT=num1+num2;
       printf("\n Addition is %d",RESULT);
       break;
case 2: //for substraction
       RESULT=num1-num2;
       printf("\n Substraction is%d",RESULT);
       break;
case 3://for multiplication
       RESULT=num1*num2;
       printf("\n Multiplication is%d", RESULT);
       break;
case 4: //for division
       RESULT=num1/num2;
       printf("\n Division is %d", RESULT);
       break;
//case 5://for exit
  //     cout<<"There is no operation so we are exit"<<endl;
    //   getch();

}
getch();
}
}

