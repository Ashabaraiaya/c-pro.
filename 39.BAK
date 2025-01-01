//write a program to demostrate class to variable using opeator overloading
#include<conio.h>
#include<iostream.h>
class Time
{
 int hrs,min;
 public:
 Time(int a,int b)
 {
  cout<<"\n Constructor called two parameter"<<endl;
  hrs=a;
  min=b;
 }
 operator int();
 ~Time()
 {
  cout<<"\n Destructor calloed."<<endl;
 }
};
Time::operator int()
{
 cout<<"class type of basic type conversion."<<endl;
 return (hrs*60+min);
}
void main()
{
 clrscr();
 int h,m,duration;
 cout<<"enter hourse";cin>>h;
 cout<<"\n enter minutes";cin>>m;
 Time t(h,m);
 duration=t;
 cout<<"\n total minutes are"<<duration;
 cout<<"\n 2nd method operator overloading"<<endl;
 duration=t.operator int();
 cout<<"total minutes are"<<duration;
 getch();
}