//write a program to demonstrate linear search
#include<iostream.h>
#include<conio.h>
class demo
{
  int a[10],count,i,no;
  public: void get();
	  void show();
};
  void demo::get()
  {
   cout<<"enter the number of elements in array";
   cin>>count;
   cout<<"enter"<<count<<"number\n";
   for(i=0;i<count;i++)
   {
     cin>>a[i];
   }
  }
  void demo::show()
  {
   cout<<"enter the number to search";
   cin>>no;
   for(i=0;i<count;i++)
   {
     if(a[i]==no)
     {
     cout<<"element found at index\n"<<i;
     break;
     }
   }
   if(i==count)
   {
   cout<<"element not found in array\n";
   }
  }
void main()
{
  clrscr();
  demo d1;
  d1.get();
  d1.show();
  getch();
}