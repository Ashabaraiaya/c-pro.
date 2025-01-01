//write a code for demostrate method over loading
#include<conio.h>
#include<iostream.h>
class Constructor{
 public:
 int grno;
 void Display()
 {
  cout<<"\n Hii ,I am default method";
 }
 void Displaygrno(int grno)
 {
  cout<<"\n method one parameter"<<grno;
 }
 void Display(int grno,char*nm)
 {
  cout<<"\n method two parameterr";
  cout<<"'\n grno is:"<<grno<<"and student name is:"<<nm;
 }
};
void main()
{
 clrscr();
 Constructor C1;
 C1.Display();
 C1.Displaygrno(234);
 C1.Display(2406,"asha");
 getch();
}

