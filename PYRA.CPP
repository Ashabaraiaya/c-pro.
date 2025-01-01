#include<conio.h>
#include <iostream.h>
int main()
{
    int r;
    clrscr();
    cout << "Enter number of rows: ";
    cin >> r;
    for(int i = 1; i <= r; ++i)
     {
	for(int j = 1; j <= i; ++j)
	{
	    cout << " "<<j;
	}
      //	cout << "\n";
    cout<<endl;
}
     {
	for(int j = 1; j <= i; --j)
	{
	    cout << " "<<j;
	}

       //	cout << "\n";
     cout<<endl;
    }
    return 0;
}