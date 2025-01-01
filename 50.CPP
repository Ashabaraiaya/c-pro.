#include<conio.h>
#include<iostream.h>
class DemoA
{
 public:
 int a;
 DemoA()
 {
  cout<<"\n Good MOrning From Class A:";
 }
 void Display()
 {
  cout<<"\n value of Ais:"<<a;
 }
};
class DemoB
{
 public:
 int b;
 DemoB()
 {
  cout<<"\n Good Morning From DemoB constructor...";
 }
 void DisplayB()
 {
  cout<<"\n value of B is :"<<b;
 }
};
class DemoC:public DemoA,public DemoB
{
 public:
 int c;
 DemoC()
 {
  cout<<"\n Good Morning Frmo DemoC constructor....";
 }
 void DisplayC()
 {
  cout<<"\n Value of C is:"<<c;
 }
};
void main()
{
 clrscr();
 DemoC C1;
 C1.a=10;
 C1.b=20;
 C1.c=30;
 C1.Display();
 C1.DisplayB();
 C1.DisplayC();
 getch();
}

