#include<iostream.h>
#include<conio.h>
class demo
{
  int n,f;
  public: void show();
  int fact(int);
};
   int demo::fact(int n)
   {
    if(n==0)
     {
      return 1;
     }
    else
     {
      return n*fact(n-1);
     }
   }
   void demo::show()
   {
    cout<<"enter the number"<<endl;
    cin>>n;
    f=fact(n);
    cout<<"factorial of"<<n<<"is"<<f<<endl;
   }
   void main()
  {
    clrscr();
    demo d1;
    d1.show();
    getch();
}
