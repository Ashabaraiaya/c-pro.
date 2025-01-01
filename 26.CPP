#include<iostream.h>
#include<conio.h>
class MyCala
{
 public :
 int val;
 void inputData(int v)
 {
  val=v ;
 }
 MyCala sum(MyCala m1,MyCala m2)
 {
  MyCala m3;
  m3.val=m1.val+m2.val;
  return m3;
 }
};
void main()
{
 int value;
 clrscr();
 MyCala c1,c2,c3,c4;
 cout<<"enter value:";cin>>value;
 c1.inputData(value);
 cout<<"enter value:"; cin>>value;
 c2.inputData(value);
 c4=c3.sum(c1,c2);
 cout<<"sum is:"<<c4.val;
 getch();
}
