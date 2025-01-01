//write a program to demostrate private member function declaration and multiple adject oparation
#include<iostream.h>
#include<conio.h>
class Test
{
 int a;
 void ReadData();
 public:
 void InputeData(int a);
};
void Test::ReadData()
{
 cout<<"\n value is :"<<a;
}
void Test::InputeData(int A)
{
 a=A;
 ReadData();
}
void main()
{
 Test t1,t2,t3;
 clrscr();
 int val;
 cout<<"enter value:";cin>>val;
 t1.InputeData(val);
 cout<<"\n enter value:";cin>>val;
 t2.InputeData(val);
 cout<<"\n enter value:";cin>>val;
 t3.InputeData(val);
 getch();
}