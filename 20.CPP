//write  aprogram to demostratae outeside fuction declaration of class
#include<iostream.h>
#include<conio.h>
class DemoOutside
{
 public:
 char *name;
 void welcomeUser(char*nm);
 void DisplayUser();
};
void main()
{
 char*st;
 clrscr();
 cout<<"enter user name:";cin>>st;
 DemoOutside DO;
 DO.welcomeUser(st);
 DO.DisplayUser();
 getch();
}
void DemoOutside::welcomeUser(char *nm)
{
 name=nm;
}
void DemoOutside::DisplayUser()
{
 cout<<"\n Welcome "<<name<<" into the world of object oriented programming....";
}

