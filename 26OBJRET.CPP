#include<iostream.h>
#include<conio.h>
class MyCla
{
 public:
 int val;
 void inputData(int v)
 {
  val=v ;
 }
 MyCla sum(MyCla m1,MyCla m2)
 {
  MyCla m3;
  m3.val=m1.val+m2.val;
  return m3;
 }
};
void main()
{
 int value;
 clrscr();
 MyCla c1,c2,c3,c4;
 cout<<"enter value:";cin>>value;
 c1.inputData(value);
 cout<<"enter value:"; cin>>value;
 c2.inputData(value);
 c4=c3.sum(c1,c2);
 cout<<"sum is:"<<c4.val;
 getch();
}
