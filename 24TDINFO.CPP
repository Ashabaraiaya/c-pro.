#include<conio.h>
#include<iostream.h>
class stud_info
{
 public:
 int grno;
 char stunm[20],city[15],contactno[10],gender[6];
 void inputdata()
 {
  cout<<"enter GRNO :";cin>>grno;
  cout<<"enter student name:";cin>>stunm;
  cout<<"enter city:";cin>>city;
  cout<<"enter contactno:";cin>>contactno;
  cout<<"enter gender:";cin>>gender;
 }
 void displaydata()
 {
  cout<<"\n"<<grno<<"\t"<<stunm<<"\t"<<city<<"\t"<<contactno<<"\t"<<gender;
 }
};
void main()
{
 stud_info s[10];
 clrscr();
 for(int x=0;x<10;x++)
 {
  s[x].inputdata();
 }
  cout<<"\n GRNO \t student name \t contact no \t gender";
  for(x=0;x<10;x++)
  {
   s[x].displaydata();
  }
}