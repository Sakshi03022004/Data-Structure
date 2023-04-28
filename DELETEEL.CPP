//delete element in given position of array
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class demo
{
  private:int n,a[20],p,ele;
  public:void get();
	 void remove();
	 void display();
};
void demo::get()
{
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cout<<"enter the position (0 to "<<n-1<<")";
    cin>>p;
}
void demo::remove()
{
   if(p>=n-1)
   {
     cout<<p<<"is an invalide position";
     exit(0);
   }
   ele=a[p];
   for(int i=p+1;i<n;i++)
   {
     a[i-1]=a[i];
     n--;
     cout<<ele<<"is successfuly remove"<<endl;
   }
}
void demo::display()
{
  cout<<"the array  after deletion is";
  for(int i=0;i<n;i++)
  {
  cout<<a[i]<<endl;
  }
}
void main()
{
  clrscr();
  demo d1;
  d1.get();
  d1.remove();
  d1.display();
  getch();
}