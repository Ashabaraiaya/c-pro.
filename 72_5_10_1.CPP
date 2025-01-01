#include<iostream.h>
void main()
{
 int c=2,gap=3,step=1;
 while(step<8)
 {
  cout<<" "<<c;
  c=c+gap;
  gap=gap+2;
  step++;
 }
}