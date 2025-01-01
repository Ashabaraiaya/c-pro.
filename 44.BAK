
//multilevel inheritance
#include<conio.h>
#include<iostream.h>
class DemoA
{
 public:
 int a;
 DemoA()
 {
  cout<<"\n Good morning Demo A constructor....";
 }
 void DisplayA()
 {
  cout<<"\n value of A is :"<<a;
 }
};
class DemoB :public DemoA
{
 public:
 int b;
 DemoB()
 {
  cout<<"\n Good morning DemoB Constructor.....";
 }
 void DisplayB()
 {
  cout<<"\n vaule of B is:"<<b;
 }
};
class DemoC :public DemoB
{
 public:
 int c;
 DemoC()
 {
  cout<<"\n Good morning Demo C Constructor.....";
 }
 void DisplayC()
 {
  cout<<"\n vaule of C is:"<<c;
 }
};
void main()
{
 clrscr();
 DemoC C1;
 C1.a=10;
 C1.b=20;
 C1.c=30;
 C1.DisplayA();
 C1.DisplayB();
 C1.DisplayC();
 getch();
}