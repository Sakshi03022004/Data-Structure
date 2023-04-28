//insertion sort
#include<iostream.h>
#include<conio.h>
class demo
{
private: int i,j,n,a[20],temp;
public : void read();
	 void get();
	 void show();
};
void demo::read()
{
  cout<<"\n enter the number of elements";
  cin>>n;
  cout<<"\n enter the elements";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
}
void demo::get()
{
  for(i=1;i<n;i++)
  {
   temp=a[i];
   j=i-1;
   while(j>=0 && a[j]>temp)
   {
   a[j+1]=a[j];
   j--;
   }
   a[j+1]=temp;
  }
}
void demo::show()
{
  cout<<"sorted array is";
  for(i=0;i<n;i++)
   {
   cout<<"\n "<<a[i];
   }
}
void main()
{
clrscr();
demo d1;
d1.read();
d1.get();
d1.show();
getch();
}