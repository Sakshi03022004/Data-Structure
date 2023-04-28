//selection sort
#include<iostream.h>
#include<conio.h>
class demo
{
private:
	int a[30],loc,n,j,i,min,temp;
public:void read();
       void get();
       void show();
};
void demo::read()
{
 cout<<"\nenter the number of elements";
 cin>>n;
 cout<<"\nenter the elements";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
}
void demo::get()
{
  for(i=0;i<n-1;i++)
  {
    min=a[i];
    loc=i;
  for(j=i+1;j<n;j++)
  {
   if(min>a[j])
   {
   min=a[j];
   loc=j;
   }
   }
  temp=a[i];
  a[i]=a[loc];
  a[loc]=temp;
  }
}
void demo::show()
{
  cout<<"\n sorted list";
  for(i=0;i<n;i++)
  {
   cout<<"\n"<<a[i];
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

