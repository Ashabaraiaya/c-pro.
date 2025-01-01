//write a program to calulate arithmetic operation for two diffrent object and display with apropriate output
#include<iostream.h>
#include<conio.h>
class ArithOpr
{
 public:
 int a,b;
 void InputData()
 {
  cout<<"enter value of A:";cin>>a;
  cout<<"\n eneter value of b:";cin>>b;
 }
 ArithOpr operator+(ArithOpr a1)
 {
 ArithOpr a3;
 a3.a=a+a1.a;
 a3.b=b+a1.b;
 return a3;
 }
 void Display()
 {
  cout<<"\n value of a is:"<<a;
  cout<<"\n value of b is:"<<b;
 }
};
void main()
{
 clrscr();
 ArithOpr a1,a2,a3;
 cout<<"\n enter first object values\n";
 a1.InputData();
 cout<<"\n enter second object values\n";
 a2.InputData ();
 a3=a1+a2;
 cout<<"\n first object data"<<endl;
 a1.Display();
 cout<<"\n second object data"<<endl;
 a2.Display();
 cout<<"\n third object data"<<endl;
 a3.Display();
 getch();
}

																													//write a program to calculate arithmetic

