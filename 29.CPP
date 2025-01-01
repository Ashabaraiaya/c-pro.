#include<iostream.h>
#include<conio.h>
class Demo
{
 public:
 int X,Y,ans;
 void input(int a,int b)
 {
  X=a;
  Y=b;
 }
 void calculate()
 {
  ans=X*Y;
 }
 void display()
 {
  cout<<"\n maltipliction of"<<X<<" and "<<Y<<"is :"<<ans;
 }
};
void main()
{
 clrscr();
 Demo d1;
 Demo *ptrd;
 d1.input(10,20);
 d1.calculate();
 d1.display();
 ptrd=&d1;
 cout<<"\n\n Using pointer as refrence";
 ptrd->display();
 getch();
}