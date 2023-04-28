//serch the element index in array
#include<iostream.h>
#include<conio.h>
class demo
{
       int a[10],count,i,num;
public :void read();
	void show();
};
void demo::read()
{
  cout<<"enter the number of elements in array"<<endl;
  cin>>count;
  cout<<"enter the elements";
  for(i=0;i<count;i++)
  {
   cin>>a[i];
  }
}
void demo::show()
{
 cout<<"\nenter the number to search in array";
 cin>>num;
 for(i=0;i<count;i++)
 {
  if(a[i]==num)
  {
  cout<<"element found at index"<<i;
  break;
  }
 }
  if(i==count)
  {
  cout<<"element not present in araay ";
  }
}
void main()
{
 clrscr();
 demo d1;
 d1.read();
 d1.show();
 getch();
}