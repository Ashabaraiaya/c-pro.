//Writw a Code to Demostrate Hybrid Inheritence
#include<conio.h>
#include<iostream.h>
class DemoA
{
 public:
 void DisplayA()
 {
  cout<<"\n Base Class Method called"<<endl;
 }
};
class DemoB: public DemoA
{
 public:
 void DisplayB()
 {
  cout<<"\n Derived class Method called"<<endl;
 }
};
class DemoC:public DemoA
{
 public:
 void DisplayC()
 {
  cout<<"\n DemoC class method called"<<endl;
 }
};
class hybride:public DemoB,public DemoC
{
 public:
 void DisplayH()
 {
  cout<<"\n Hybride class Method called"<<endl;
 }
};
void main()
{
 clrscr();
 hybride H;
 DemoA A;
 A.DisplayA();
 H.DisplayB();
 H.DisplayC();
 H.DisplayH();
 getch();
}