//write a program to demonstrate bubble sort
#include<iostream.h>
#include<conio.h>
class demo
{
  int i,j,temp,a[5];
  public:
	 void get();
	 void read();
	 void show();
};
 void demo::get()
 {
 cout<<"enter the array elements";
 int no=5;
 for(i=0;i<no;i++)
 {
 cin>>a[i];
 }
  }
  void demo::read()
  {
  int no=5;
 for(i=0;i<no-1;i++)
 {
   for(j=0;j<no-1-i;j++)
   {
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
   }
 }
 }
 void demo::show()
 {
 cout<<"\n array after bubble sort";
 int no=5;
 for(i=0;i<no;i++)
 {
 cout<<"\n"<<a[i];
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