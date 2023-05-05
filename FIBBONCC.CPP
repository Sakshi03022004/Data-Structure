//write a program to demonstarte fiboncci seriese
#include<iostream.h>
#include<conio.h>
class demo
{
  public:int fibo(int n);
	 void display();
};
int demo::fibo(int n)
{
if(n<=1)
{
return n;
}

return fibo(n-1)+fibo(n-2);
}
void demo::display()
{
  int num;
  cout<<"enter number";
  cin>>num;
  for(int i=0;i<num;i++)
  {
    cout<<fibo(i)<<" ";
  }
}
void main()
{
  clrscr();
  demo d1;
  d1.display();
  getch();
}
