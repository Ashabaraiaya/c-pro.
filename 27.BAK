// write a program to demostrate friend function declaration
#include<iostream.h>
#include<conio.h>
class MyClass
{
 int val;
 public:
  void inputdata(int v)
 {
  val=v;
 }
 friend void sum(MyClass m1,MyClass m2);
};
void sum(MyClass m1,MyClass m2)
{
 cout<<" sum of two class object value is :"<<(m1.val+m2.val);
}
void main()
{
 int value;
 clrscr();
 MyClass c1,c2,c3;
 cout<<"enter value";cin>>value;
 c1.inputdata(value);
 cout<<"enter value:";cin>>value;
 c2.inputdata(value);
 sum(c1,c2);
 getch();
}
