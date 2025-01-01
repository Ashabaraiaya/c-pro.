//write a program to accessibility of memeber variable function
#include<conio.h>
#include<iostream.h>
class AccessSpa
{
 private:
 int a;
 protected:
 int b;
 public:
 int c;
 AccessSpa()
 {
  a=1;
  b=2;
  c=3;
 }
 void Display()
 {
  cout<<"\nvalue of A is:"<<a;
  cout<<"\nvalue of B is:"<<b;
  cout<<"\nvalue of c is:"<<c;
 }
};
class sub_class:public AccessSpa
{
 public:
 sub_class()
 {
  b=1000;
 }
 void Displaysub()
 {
//  cout<<"\n sub class value of A is:"<<a;
  cout<<"\n sub class value of B is:"<<b;
  cout<<"\n sub class  value of C is:"<<c;
 }
};
void main()
{
 clrscr();
 AccessSpa as;
// as.a=10;
 //as.b=20;
 as.c=30;
 as.Display();
 sub_class sc;
// sc.a=100;
// sc.b=200;
 sc.c=3000;
 sc.Displaysub();
 sc.Display();
 getch();
}