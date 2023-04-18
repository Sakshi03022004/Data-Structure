#include<iostream.h>
#include<conio.h>
class demo
{
  int a[10][10],b[10][10],r,c,i,j;
  public :void get();
	  void read();
	  void show();
};
   void demo::get()
   {
   cout<<"Enter the number of row";
   cin>>r;
   cout<<"Enter the number of column";
   cin>>c;
   }
 void demo::read()
 {
   cout<<"enter the first matrix elements\n";
   for(i=0;i<c;i++)
   {
    for(j=0;j<r;j++)
    {
     cin>>a[i][j];
    }
   }
   cout<<"Enter the second matrix elements \n";
   for(i=0;i<c;i++)
   {
    for(j=0;j<r;j++)
    {
     cin>>b[i][j];
    }
   }
 }
 void demo::show()
 {
  cout<<"Addition of two matrix\n";
  for(i=0;i<c;i++)
  {
   for(j=0;j<r;j++)
   {
    cout<<a[i][j]+b[i][j]<<" ";
   }
  }
 }
 void main()
 {
 clrscr();
 demo d1;
 d1.get();
 d1.read();
 d1.show();
 getch();
 }