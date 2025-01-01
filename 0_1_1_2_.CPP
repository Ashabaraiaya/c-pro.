#include<iostream.h>
#include<conio.h>
void main()
{
 int n, first=0,second=1,next;
 cout<<"\n enter number of terms:";cin>>n;
 cout<<"fibinaci series:";
 for(int i=0; i<n; ++i)
 {
  if(i<=1)
  next=i;
  else
  {
   next=first+second;
   first=second;
   second=next;
  }
 // return 0;


 }
}