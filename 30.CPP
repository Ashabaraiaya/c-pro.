// write a program to demostrate con structor declaration and callind fo peramiteris contructor
#include<iostream.h>
#include<conio.h>
class A
{
 public:
 A()
 {
  cout<<"\n good morning from default constructor";
 }
 A(char*a)
 {
  cout<<"\n from parametrized constructor good byee.."<<a;
 }
};
void main()
{
 clrscr();
 A a1;
 A a2("asha");
 getch();
}



















