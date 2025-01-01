#include<iostream.h>
#include<conio.h>
class totalstudent
{
 int grno;
 static int cnt;
 public:
 int count;
 void setgrno(int gr)
 {
  grno=gr;
 cnt++;
  count++;
 }
void gettotalstudent()
{
 cout<<"\n total number of student are:"<<cnt;
 cout<<"\n total number of student as per object:"<<count;
}
};
int totalstudent::cnt=0;
void main()
{
 clrscr();
 int grno;
 totalstudent ts1,ts2,ts3;
 ts1.count=ts1.count=ts3.count=0;
 cout<<"\n enter object value:"<<endl;
 for(int x=1; x<=3; x++)
 {
  cout<<" enter grno:";cin>>grno;
  ts1.setgrno(grno);
 }
 cout<<"\n enter second object values:"<<endl;
 for(x=1;x<=5;x++)
 {
  cout<<"entet grno:";cin>>grno;
  ts2.setgrno(grno);
 }
 cout<<"\n enter third object values:"<<endl;
 for(x=1;x<=2;x++)
 {
  cout<<"enter grno:";cin>>grno;
  ts3.setgrno(grno);
 }
 cout<<"\n enter value of first object:"<<endl;
 ts1.gettotalstudent();
 cout<<"\n value os second object:"<<endl;
 ts2.gettotalstudent();
 cout<<"\n value of third object:"<<endl;
 ts3.gettotalstudent();
 getch();
}

