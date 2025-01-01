//write a progtram to demostrate operater overloading
#include<conio.h>
#include<iostream.h>
class Demo
{
 public:
 int x;
 Demo (int a)
 {
  x=a;
 }
 void operator *() { x=x*x; }
 void operator -() { x=-x; }
 void operator +() { x=x+x; }
// void operater /() { x=x*x; }
 void display()
 {
  cout<<"\n value of x is:"<<x;
 }
};
void main()
{
 clrscr();
 int data;
 cout<<"enter value :";
 cin>>data;
 Demo d(data);
 d.display();
 *d; d.display();
 -d; d.display();
 +d; d.display();
// /d; d.display();
getch();
}