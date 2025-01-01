#include<conio.h>
#include <iostream.h>
void main()
{
//    int r,j;
    clrscr();
 //   cout << "Enter number of rows: ";
   // cin >> r;
    for(int i = 1; i <=5; i++)
     {
	for(int j = 1; j <= i; j++)
	{
	    cout << " "<<j;
	}
    cout<<endl;
    }
    for(i = 4; i >=1; i--)
     {
	for(int  j = 1; j <= i;j++)
	{
	    cout << " "<<j;
	}
    cout<<endl;
    }

for(i = 1; i <=5; i++)
     {
	for(int j = 1; j <= i; --j)
	{
	    cout << "\t "<<j;
	}
    cout<<endl;
    }
    for(i = 4; i >=1; i--)
     {
	for(int j = 1; j <= i;--j)
	{
	    cout << "\t "<<j;
	}
    cout<<endl;
    }
}

