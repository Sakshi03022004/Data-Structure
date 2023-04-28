//insert last element in array
#include<iostream.h>
#include<conio.h>
class demo
{
int arr[10],no,i,ele;
public: void get();
	void show();
};
void demo::get()
{
  cout<<"enter the 5 elements"<<endl;
  for(i=0;i<5;i++)
  {
    cin>>arr[i];
  }
}
void demo::show()
{
  cout<<"enter the element to insert";
  cin>>ele;
  arr[i]=ele;
  cout<<"\n  the new array is:\n";
  for(i=0;i<6;i++)
  {
  cout<<arr[i]<<"  ";
  cout<<endl;
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