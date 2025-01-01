#include<iostream.h>
void main()
{
 int n=5;
  for(int i=1;i<=n;i++)
  {
    for(int k=1;k<n-1;k++)
	{cout<<" ";}
    for(int j=1; j<=i;j++)
	{cout<< "*";}
	cout<<endl;
  }
  {
    for(int a=n;a>=1;a--)
    {
      for(int b=1;b<=6-i;b++)
	{cout<<" ";}
      for(int c=1;c<=i;c++)
	{cout<<"*";}
	cout<<endl;
     }
 }
}