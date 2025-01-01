
 //write a program to demostrate copy constructor
 #include<iostream.h>
 #include<conio.h>
 class DemoA
 {
  public:
  DemoA()
  {
   cout<<"\n From DemoA constructor.....";
  }
  void Message()
  {
   cout<<"Good MOrning";
  }
 }; class DemoB
{
  public:
  DemoB(DemoA d)
 {
  d.Message();
 }
};
void main()
{
clrscr();
 DemoA DA;
 DemoB DB(DA);
 getch();
}