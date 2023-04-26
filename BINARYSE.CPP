#include<iostream.h>
#include<conio.h>
class demo
{
 private: int i,n,data,l,mid,a[20],flag;
 public: void read();
	 void display();
 };
 void  demo::read()
 {
  cout<<"\n enter the number of elements";
  cin>>n;
  cout<<"\n enter the elements";
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
  cout<<"\n enter the item to be search";
  cin>>item;
  beg=0;
  end=n-1;
  while(beg<=end)
  {
  mid=(beg+end)/2;
  if(a[mid]==item)
  {
  flag=1;
  break;
  }
  else if(item>a[mid])

  beg=mid+1;
  else
  end=mid-1;
  }
  }
  void demo::display()
  {
  if(flag==1)
  {
  cout<<"\n the element is found at location"<<mid+1;
  }
  else
  {
  cout<<"\n element not found";
  }
  }
  void main()
  {
  clrscr();
  demo x;
  x.read();
  x.display();
  getch();
  }