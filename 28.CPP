//write a program to demostrate constet member function declaration
#include<iostream.h>
#include<conio.h>
class ConstDemo
{public:
 void Addition (int a,int b)const
 {
  cout<<"\n Addition is:"<<(a+b);
 }
};
void main()
{
clrscr();
 ConstDemo cs;
 cs.Addition (10,20);
 getch();
}