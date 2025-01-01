// write a program to demostrate single inheritance
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
void main()
{
 clrscr();
 DemoB B1;
 B1.a=10;B1.b=20;
 B1.DisplayA();
 B1.DisplayB();
 getch();
}