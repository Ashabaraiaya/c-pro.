#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
class ArrMem
{
 public:
 int *p;
 ArrMem()
 {
  p=new int [5];
  for(int x=0; x<5; x++)
  p[x]=rand()/100;
  for(x=0; x<5; x++)
  cout<<p[x]<<"\t";
  delete p;
 }
 ArrMem(int n)
 {
  p=new int [n];
  for(int x=0; x<n; x++)
  p[x]=rand()/100;
  for(x=0; x<n; x++)
  cout<<p[x]<<endl;
  delete p;
 }
 ~ArrMem()
 {
  delete p;
  cout<<"\n dertuctor execute successfully.";
 }
};
void main()
{
 clrscr();
 ArrMem am1;
 int n;
 cout<<"enter no of element:";
 cin>>n;
 ArrMem am2(n);
 cout<<"\n dynamic constructor array:"<<endl;
 ArrMem *am3=new ArrMem[5];
 getch();
}

